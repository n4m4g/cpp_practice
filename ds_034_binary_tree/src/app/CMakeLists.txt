cmake_minimum_required(VERSION 3.10)

project(app)

include_directories(${CMAKE_SOURCE_DIR})
message(STATUS "This is CMAKE_SOURCE_DIR: " ${CMAKE_SOURCE_DIR})

set(CMAKE_BUILD_TYPE Debug)

add_executable(app main.cpp)

target_link_libraries(app binarytree)
