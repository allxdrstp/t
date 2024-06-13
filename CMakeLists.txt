cmake_minimum_required(VERSION 3.10)
project(ConcatenateWords)

# Установка переменных для компиляции
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Добавление исходных файлов
add_executable(ConcatenateWords fun.cpp)
