cmake_minimum_required(VERSION 3.22.1)
project(googeTest_Template)

option(RUN_TEST "This is option for running test" OFF)

add_subdirectory(src)

if(RUN_TEST)
    add_subdirectory(test)
endif()