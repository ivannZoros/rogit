cmake_minimum_required(VERSION 3.26)
project(untitled2)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_SOURCES
        main.cpp
        game.cpp
)
set(PROJECT_HEADERS
        game.h
        Header.h
)
add_executable(
        ${PROJECT_NAME}
        ${PROJECT_SOURCES}
        ${PROJECT_HEADERS}
)
