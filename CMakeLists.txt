cmake_minimum_required(VERSION 3.20)
project(Sorting_strategy)

set(CMAKE_CXX_STANDARD 20)

add_executable(Sorting_strategy main.cpp sortingStrategy.h bubbleSortStrategy.cpp selectionSortStrategy.cpp bubbleSortStrategy.h selectionSortStrategy.h sortingStrategy.cpp)
add_subdirectory(Google_tests)
