set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_LIST_DIR}")
find_package(CMark REQUIRED)

add_library(markdown src/markdown.cc)
target_include_directories(markdown PUBLIC ${CMARK_INCLUDE_DIRS} ${CMAKE_CURRENT_LIST_DIR}/src)
#add_executable(markdown_test src/main.cc)
target_link_libraries(markdown ${CMARK_LIBRARY})
