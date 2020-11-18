cmake_minimum_required(VERSION 3.10)
project(sestblog VERSION 0.1)

include(cmake/CPM.cmake)
CPMAddPackage(
    NAME lzcmarkdownpp
    GIT_REPOSITORY https://git.ctrlz.es/lazycoders/lzcmarkdownpp.git
    GIT_TAG master
    )

CPMAddPackage(
    NAME cpptemplater
    GIT_REPOSITORY https://git.ctrlz.es/lazycoders/cpptemplater.git 
    GIT_TAG master
    )

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

#include(Submodules.cmake)
#add_subdirectory(cpptemplater)
add_subdirectory(blog)
