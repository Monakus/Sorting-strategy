project(Google_tests)
add_subdirectory(lib)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(../include)

# adding the Google_Tests_run target
set(FILES_TO_TEST sortingTests.h sortingTests.cpp ../src/sortingStrategy.cpp ../src/bubbleSortStrategy.cpp ../src/selectionSortStrategy.cpp)
add_executable(Google_Tests_run ${FILES_TO_TEST})

target_link_libraries(Google_Tests_run gtest gtest_main)
