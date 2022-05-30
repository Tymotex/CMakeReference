cmake_minimum_required(VERSION 3.10)       

# Sets the project name.
project(HelloWorld VERSION 1.0)           

# Enforces a specific C++ version. Must be above the `add_executable` call.
set(CMAKE_CXX_STANDARD 17)                
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(HelloWorld hello-world.cc)

