# - решетка это комментарии
cmake_minimum_required(VERSION 3.25)

# Здесь указывается имя проекта и типы файлов которые будем искать
project(rogit LANGUAGES CXX C)

# Стандарт лучше брать ниже предложенного
set(CMAKE_CXX_STANDARD 17)

# Задаем имена для списков наших файлов
set(PROJECT_SOURCES
    main.cpp
    game.cpp
    map.cpp
    player.cpp
)

set(PROJECT_HEADERS
    game.hpp
    map.hpp
    player.hpp
)

# Для отвзяки от путей для разных систем используем ${PROJECT_NAME}
add_executable(
    ${PROJECT_NAME}
    ${PROJECT_SOURCES}
    ${PROJECT_HEADERS}
)
