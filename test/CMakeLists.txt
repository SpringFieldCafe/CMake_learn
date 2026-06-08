cmake_minimum_required(VERSION 4.0)
project(test1 
    LANGUAGES C CXX
    )

aux_source_directory(./ SRC)
include_directories(${HEADPATH})
link_directories(${STATICLIBPATH})
link_libraries(${SORTLIB})
set(EXECUTABLE_OUTPUT_PATH ${EXEPATH})
add_executable(${APPNAME} ${SRC})
