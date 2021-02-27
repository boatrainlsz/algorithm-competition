# cmake_minimum_required(VERSION <specify CMake version here>)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithm main.cpp chapter3/vector_test.cpp chapter3/vector_test.h chapter4/permutation.cpp chapter4/permutation.h)