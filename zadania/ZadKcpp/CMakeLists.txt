cmake_minimum_required(VERSION 2.8)
project(cpp_lab)

file(GLOB SOURCES src/*.cc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_executable(main ${SOURCES})