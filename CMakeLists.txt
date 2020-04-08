cmake_minimum_required(VERSION 3.10)
project(leetcode)

set(CMAKE_CXX_STANDARD 11)

include_directories(./lintcode)


add_executable(leetcode main.cpp linked-list/odd-even-linked-list/Solution.cpp tree/binary-tree-level-order-traversal/Solution.cpp)