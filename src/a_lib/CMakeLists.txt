cmake_minimum_required(VERSION 3.22.1)
project(a_lib)

add_library(${PROJECT_NAME} a.c bar/bar.c foo/foo.c)

target_include_directories( ${PROJECT_NAME} PUBLIC
                            ${CMAKE_CURRENT_SOURCE_DIR}
                            ${CMAKE_CURRENT_SOURCE_DIR}/foo
                            ${CMAKE_CURRENT_SOURCE_DIR}/bar)
        