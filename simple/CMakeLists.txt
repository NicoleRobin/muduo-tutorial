cmake_minimum_required(VERSION 2.6)
project(simple)

set(CMAKE_MAKEFILE_VERBOSE on)

add_executable(simple_echo echo/echo.cc echo/main.cc)
target_link_libraries(simple_echo muduo_base muduo_net pthread)

add_executable(simple_time time/time.cc time/main.cc)
target_link_libraries(simple_time muduo_base muduo_net pthread)
