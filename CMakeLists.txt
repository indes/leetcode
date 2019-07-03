cmake_minimum_required(VERSION 3.10)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)

include_directories(./lintcode)
add_executable(leetcode main.cpp lintcode/119EditDistance.h leetcode/26-remove-duplicates-from-sorted-array/Solution.h)