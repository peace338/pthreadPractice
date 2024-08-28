cmake_minimum_required(VERSION 3.22.1)
project(googleTest_Template)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/a_lib)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/b_lib)

add_executable(${PROJECT_NAME} main.c)

target_include_directories( ${PROJECT_NAME} PUBLIC              # add_executable에는 INTERFACE 키워드는 적절하지 않고 PUBLIC or PRIVATE로 사용
                            ${CMAKE_CURRENT_SOURCE_DIR}
                            ${CMAKE_CURRENT_SOURCE_DIR}/a_lib
                            ${CMAKE_CURRENT_SOURCE_DIR}/b_lib)
target_link_libraries(  ${PROJECT_NAME} PUBLIC a_lib)
target_link_libraries(  ${PROJECT_NAME} PUBLIC b_lib)