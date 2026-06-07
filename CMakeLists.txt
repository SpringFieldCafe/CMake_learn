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

# aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC)
set(EXECUTABLE_OUTPUT_PATH ../output_use_aux/t12/t2/)
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
# set(CMAKE_CXX_STANDARD 11)
include_directories(${PROJECT_SOURCE_DIR}/include)
# set(CMAKE_CXX_STANDARD 98)
# add_executable(app ${SRC})
add_library(calc SHARED ${SRC})
set_target_properties(calc PROPERTIEs RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/output/SharedLib)