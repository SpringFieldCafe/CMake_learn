cmake_minimum_required(VERSION 4.0)
project(calc LANGUAGES C CXX)

aux_source_directory(./ SRC)
include_directories(${HEADPATH})
set(LIBRARY_OUTPUT_PATH ${STATICLIBPATH})
add_library(${CALCLIB} SHARED ${SRC})