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
        wis/command/ICommand.h
        wis/command/FileCommand.cpp
        wis/command/FileCommand.h
        wis/command/ResizeCommand.cpp
        wis/command/ResizeCommand.h
        wis/command/RotateCommand.cpp
        wis/command/RotateCommand.h
        wis/ImageProcessor.cpp
        wis/ImageProcessor.h
        )

add_executable(WebImageServer ${SOURCE_FILES})