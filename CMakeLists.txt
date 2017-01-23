cmake_minimum_required(VERSION 2.6)
project(muduo-tutorial)

set(CMAKE_MAKEFILE_VERBOSE on)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)


add_subdirectory(simple)
