cmake_minimum_required(VERSION 3.10)

project(MyProject)

add_subdirectory(MathFunctions)       
add_executable(MyProject start.cc)

target_link_libraries(MyProject PUBLIC MathFunctions)

target_include_directories(
    MyProject
    PUBLIC
    "${PROJECT_BINARY_DIR}"
    "${PROJECT_SOURCE_DIR}/MathFunctions"
)
