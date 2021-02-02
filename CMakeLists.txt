cmake_minimum_required(VERSION 3.14)

project(eyelibcc VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(track)
add_subdirectory(tests)