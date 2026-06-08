cmake_minimum_required(VERSION 4.0)
project(integration LANGUAGES C CXX)
set(STATICLIBPATH ${PROJECT_SOURCE_DIR}/lib) # src
set(EXEPATH ${PROJECT_SOURCE_DIR}/bin) #src
set(HEADPATH ${PROJECT_SOURCE_DIR}/include) #head
set(CALCLIB calc)
set(SORTLIB sort)
set(APPNAME2 app2)

add_subdirectory(calc)
add_subdirectory(sort)
add_subdirectory(test)
