cmake_minimum_required(VERSION 3.25)
project(Cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(Cpp main.cpp basic/Complex.h basic/Complex-test.cpp basic/MyString.h basic/Complex-test.h basic/MyString-test.cpp)
