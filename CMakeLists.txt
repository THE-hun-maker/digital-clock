cmake_minimum_required(VERSION 3.0)

project(digital-clock)

set(CMAKE_CXX_STANDARD 11)
set(SOURCES src/main.cpp)

add_executable(digital-clock ${SOURCES})