cmake_minimum_required(VERSION 3.6)
project(WebImageServer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        CMakeLists.txt
        main.cpp
        wis/File.h
        wis/LocalFile.cpp
        wis/LocalFile.h
        wis/WebImageServer.cpp
        wis/WebImageServer.h
        wis/Request.cpp
        wis/Request.h
        wis/Response.cpp
        wis/Response.h
        wis/Command.h
        wis/ResizeCommand.cpp
        wis/ResizeCommand.h
        wis/RotateCommand.cpp
        wis/RotateCommand.h
        wis/ImageProcessor.cpp
        wis/ImageProcessor.h)

add_executable(WebImageServer ${SOURCE_FILES})