cmake_minimum_required(VERSION 3.19)

project(Tutorial VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if (MSVC)
 add_compile_options(/W4)
else()
 add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_executable(tutorial main.cpp)