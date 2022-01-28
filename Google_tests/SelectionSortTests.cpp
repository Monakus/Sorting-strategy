#include "gtest/gtest.h"
#include "sortingStrategy.h"
#include "selectionSortStrategy.h"

class SelectionSortFixture : public ::testing::Test{
protected:
    SortingContext *context{};
    void SetUp() override{
        context = new SortingContext(new SelectionSortStrategy);
    }

    void TearDown() override{
        delete context;
    }
};

TEST_F(SelectionSortFixture, trivial1){
    // given
    int array[] = {8, 3, 5, 5, 7, 6, 1, 3, 4};
    int count = 9;

    // when
    context->doSorting(array, count);

    // then
    int sortedArray[] = {1, 3, 3, 4, 5, 5, 6, 7, 8};
    for (int i = 0; i < count; ++i) {
        EXPECT_EQ(array[i], sortedArray[i]) << "Values x and y differ at index " << i;
    }
}

TEST_F(SelectionSortFixture, trivial2){
    // given
    int array[] = {5, 4, 7, 90, 31, 1, 4, 8, 23, 74, 15, 0, 57};
    int count = 13;

    // when
    context->doSorting(array, count);

    // then
    int sortedArray[] = {0, 1, 4, 4, 5, 7, 8, 15, 23, 31, 57, 74, 90};
    for (int i = 0; i < count; ++i) {
        EXPECT_EQ(array[i], sortedArray[i]) << "Values x and y differ at index " << i;
    }
}

TEST_F(SelectionSortFixture, largeNumbers){
    // given
    int array[] = {583, 113, 222, 123, 635, 589, 999};
    int count = 7;

    // when
    context->doSorting(array, count);

    // then
    int sortedArray[] = {113, 123, 222, 583, 589, 635, 999};
    for (int i = 0; i < count; ++i) {
        EXPECT_EQ(array[i], sortedArray[i]) << "Values x and y differ at index " << i;
    }
}

TEST_F(SelectionSortFixture, reverseOrder){
    // given
    int array[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int count = 9;

    // when
    context->doSorting(array, count);

    // then
    int sortedArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < count; ++i) {
        EXPECT_EQ(array[i], sortedArray[i]) << "Values x and y differ at index " << i;
    }
}