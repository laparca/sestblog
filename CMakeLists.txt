cmake_minimum_required(VERSION 3.10)
project(sestblog VERSION 0.1)

include(cmake/CPM.cmake)
CPMAddPackage("gh:laparca/lzcmarkdownpp#master")

CPMAddPackage("gh:laparca/cpptemplater#master")

CPMAddPackage(
    NAME yaml-cpp
    GITHUB_REPOSITORY jbeder/yaml-cpp
    GIT_TAG yaml-cpp-0.6.3
    OPTIONS
      "YAML_CPP_BUILD_TESTS OFF"
      "YAML_CPP_BUILD_TOOLS OFF"
      "YAML_CPP_INSTALL OFF"
    )

if(TEMPLATE)
    set(SESTBLOG_TEMPLATE ${TEMPLATE})
else()
    set(SESTBLOG_TEMPLATE default)
endif()
message(STATUS "Setting blog template to ${SESTBLOG_TEMPLATE}")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(blog)
