cmake_minimum_required(VERSION 3.10)
project(MyProject)

# Установка переменных для путей к исходным файлам и библиотекам
set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES fun.cpp test1.cpp)
set(HEADER_FILES fun.h)

# Добавление Google Test
find_package(GTest REQUIRED)

# Добавление библиотеки Google Test в проект
include_directories(${GTEST_INCLUDE_DIRS})

# Создание исполняемого файла
add_executable(${PROJECT_NAME} ${SOURCE_FILES})

# Линковка с библиотекой Google Test
target_link_libraries(${PROJECT_NAME} ${GTEST_LIBRARIES} ${GTEST_MAIN_LIBRARIES})

# Добавление тестов
enable_testing()
add_test(NAME run_tests COMMAND ${PROJECT_NAME})
