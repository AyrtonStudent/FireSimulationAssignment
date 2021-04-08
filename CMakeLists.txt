cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(untitled main.cpp Cell.cpp Cell.h Tree.h Tree.cpp Empty.h Empty.cpp Burning.h Burning.cpp Grid.cpp Grid.h)