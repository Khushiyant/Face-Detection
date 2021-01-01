cmake_minimum_required(VERSION 3.12.9)
project(Opencv)

set(CMAKE_PREFIX_PATH "C:/Program Files/opencv/build")
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_subdirectory("bin")
