cmake_minimum_required(VERSION 3.8)
project(HashMap)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Item.h ArrayList.h Map.h ArrayMap.h)
add_executable(HashMap ${SOURCE_FILES})