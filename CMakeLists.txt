cmake_minimum_required(VERSION 3.10)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)

include_directories(./lintcode)
add_executable(leetcode main.cpp leetcode/128-longest-consecutive-sequence/solution.hpp)