cmake_minimum_required(VERSION 2.8)
project(cpp_lab)

file(GLOB SOURCES src/*.cc)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

foreach (file ${SOURCES})
    get_filename_component(filename ${file} NAME_WE)
    add_executable(${filename} ${file})
endforeach (sourcefile ${SOURCES})