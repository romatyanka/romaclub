cmake_minimum_required(VERSION 3.15)

set(PROJECT_NAME laba12.2)
project("${PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_EXNENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

add_executable("${PROJECT_NAME}" laba12.2.cpp Header.h Source.cpp)

file(COPY "timee.txt" DESTINATION "/")