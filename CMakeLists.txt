cmake_minimum_required(VERSION 3.20)
project(Sorting_strategy)

set(CMAKE_CXX_STANDARD 20)

add_executable(Sorting_strategy src/main.cpp include/sortingStrategy.h src/bubbleSortStrategy.cpp src/selectionSortStrategy.cpp include/bubbleSortStrategy.h include/selectionSortStrategy.h src/sortingStrategy.cpp)
add_subdirectory(Google_tests)
