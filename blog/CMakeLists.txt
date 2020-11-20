add_executable(sestblog src/main.cc)
target_include_directories(sestblog
    PRIVATE
        ${lzcmarkdownpp_SOURCE_DIR}/include
)
target_link_libraries(sestblog lzcmarkdownpp)
