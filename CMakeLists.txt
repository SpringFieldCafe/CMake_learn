# hello
# its a CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

project(
    CMAKE_LEARN
    VERSION 1.0
    DESCRIPTION "A sample"
    HOMEPAGE_URL "https://example.com"
    LANGUAGES C CXX
)

# add_executable(main add.cpp dif.cpp mul.cpp div.cpp main.cpp)

set(SRC add.cpp dif.cpp mul.cpp div.cpp main.cpp)
set(EXECUTABLE_OUTPUT_PATH ../output_use_set/t12/t2/)
# set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD 98)
add_executable(app ${SRC})