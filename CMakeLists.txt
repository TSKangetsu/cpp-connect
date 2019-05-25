cmake_minimum_required(VERSION 3.10)
set(CMAKE_C_COMPILER="/usr/bin/gcc")
set(CMAKE_C_COMPILER="/usr/bin/g++")
project(cpp.post)
#mainINFO
add_subdirectory(cpr)
include_directories(${CPR_INCLUDE_DIRS})
#includeDIR
add_executable(postw main.cpp)
#mainFILE
target_link_libraries(postw ${CPR_LIBRARIES})
#fianl