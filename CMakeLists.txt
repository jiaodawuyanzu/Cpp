cmake_minimum_required(VERSION 3.25)
project(Cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fdump-lang-class")
add_executable(Cpp main.cpp basic/Complex.h basic/Complex-test.cpp basic/MyString.h basic/Complex-test.h basic/MyString-test.cpp basic-2/conversion.cpp basic-2/conversion.h basic-2/template.cpp basic-2/template.h basic-2/objectModel.cpp basic-2/objectModel.h)
