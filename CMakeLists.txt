cmake_minimum_required(VERSION 3.6)
project(WebImageServer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp wis/WebImageServer.cpp wis/WebImageServer.h wis/File.cpp wis/File.h wis/LocalFile.cpp wis/LocalFile.h)
add_executable(WebImageServer ${SOURCE_FILES})