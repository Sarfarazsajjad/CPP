cmake_minimum_required(VERSION 3.17)
project(Single_Responsibility_Principle)

set(CMAKE_CXX_STANDARD 14)

add_executable(Single_Responsibility_Principle main.cpp)


set(Boost_INCLUDE_DIR /usr/local/Cellar/boost/1.73.0/include)
set(Boost_LIBRARY_DIR /usr/local/Cellar/boost/1.73.0/lib)
find_package(Boost 1.73.0)
include_directories(${Boost_INCLUDE_DIR})

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()