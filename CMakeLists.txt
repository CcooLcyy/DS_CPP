cmake_minimum_required(VERSION 3.25)

project(DS_CPP VERSION 0.0.1)

include(CTest)

add_subdirectory(src)
add_subdirectory(test)

add_executable(DS_CPP src/main.cc)