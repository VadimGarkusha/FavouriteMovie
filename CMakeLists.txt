cmake_minimum_required(VERSION 3.8)
project(FavouriteMovie)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Movie.cpp Movie.h)
add_executable(FavouriteMovie ${SOURCE_FILES})