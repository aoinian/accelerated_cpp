cmake_minimum_required(VERSION 3.15)
project(accelerated_cpp)

set(CMAKE_CXX_STANDARD 14)


add_executable(print_with_star_lines Chapter_01/print_with_star_lines.cpp)
add_executable(print_hello Chapter_01/print_hello.cpp)
add_executable(print_both_name Chapter_01/print_both_name.cpp)
add_executable(rewrite_print_with_star_lines Chapter_02/rewrite_print_with_star_lines.cpp)