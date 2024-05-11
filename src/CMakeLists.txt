cmake_minimum_required(VERSION 3.1)

project(ConLib LANGUAGES CXX)

set(SOURCE_FILES)

add_subdirectory(Length)

add_library(${PROJECT_NAME} ${SOURCE_FILES})