cmake_minimum_required(VERSION 3.20)

project(DS_CPP VERSION 0.0.1)

add_subdirectory(src)
add_subdirectory(test)

add_executable(DS_CPP src/main.cc)