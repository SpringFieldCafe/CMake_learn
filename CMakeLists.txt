cmake_minimum_required(VERSION 4.0)
project(test 
    LANGUAGES CXX
)

add_definitions(-DDEBUG)
add_executable(app main.cpp)
