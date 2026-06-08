cmake_minimum_required(VERSION 4.0)
project(sort LANGUAGES C CXX)

aux_source_directory(./ SRC)
include_directories(${HEADPATH})
set(LIBRARY_OUTPUT_PATH ${STATICLIBPATH})
link_libraries(${CALCLIB})
link_directories(${STATICLIBPATH})
add_library(${SORTLIB} STATIC ${SRC})