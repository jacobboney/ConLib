cmake_minimum_required(VERSION 3.1)

project(TestingEXE LANGUAGES CXX)

add_executable( ${PROJECT_NAME} main.cpp )

target_link_libraries( ${PROJECT_NAME} ${CMAKE_SOURCE_DIR}/../src/build/libConLib.a )