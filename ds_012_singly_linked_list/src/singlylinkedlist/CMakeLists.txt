cmake_minimum_required(VERSION 3.10)

include_directories(${CMAKE_SOURCE_DIR})

project(singlylinkedlist)

add_library(singlylinkedlist singlylinkedlist.cpp)
