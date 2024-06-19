cmake_minimum_required(VERSION 3.10)
project(FunTest)

# Установка стандарта языка C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Поиск Google Test
find_package(GTest REQUIRED)

# Добавление библиотеки Google Test
include_directories(${GTEST_INCLUDE_DIRS})

# Добавление исходных файлов
add_executable(fun fun.cpp)

# Добавление тестового исходного файла
add_executable(test1 test1.cpp)

# Связывание тестового исходного файла с библиотекой Google Test
target_link_libraries(test1 ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})

# Включение тестирования
enable_testing()

# Добавление теста
add_test(NAME FunTest COMMAND test1)
