cmake_minimum_required(VERSION 2.6)
project(simple)

add_executable(simple_echo echo/echo.cc echo/main.cc)
target_link_libraries(simple_echo muduo_net)
