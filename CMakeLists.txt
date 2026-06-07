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
file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
# set(CMAKE_CXX_STANDARD 11)
add_executable(app ${SRC})
target_include_directories(app PRIVATE ${PROJECT_SOURCE_DIR}/include)
# set(CMAKE_CXX_STANDARD 98)
# add_executable(app ${SRC})
target_link_libraries(app PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/lib1/libcalc_shared.dll.a")
set_target_properties(app PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/output_normal/t9"
)
