# cmake_minimum_required(VERSION <specify CMake version here>)
project(algorithm)

set(CMAKE_CXX_STANDARD 14)

add_executable(algorithm main.cpp chapter3/VectorTest.cpp chapter3/VectorTest.h chapter4/permutation.cpp chapter4/permutation.h chapter8/FastPow.cpp chapter8/FastPow.h)