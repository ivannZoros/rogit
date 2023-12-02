cmake_minimum_required(VERSION 3.26)
project(rogit)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_SOURCES
        main.cpp
        game.cpp
        player.cpp
        player.h
        map.cpp
        map.h
)
set(PROJECT_HEADERS
        game.h
        player.cpp
        player.h
        player.h
        map.cpp
        map.h
)
add_executable(
        ${PROJECT_NAME}
        ${PROJECT_SOURCES}
        ${PROJECT_HEADERS}
)
