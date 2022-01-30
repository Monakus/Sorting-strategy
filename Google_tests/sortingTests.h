#ifndef MAIN_CPP_SORTINGTESTS_H
#define MAIN_CPP_SORTINGTESTS_H

#include "gtest/gtest.h"
#include "../include/sortingStrategy.h"
#include "../include/bubbleSortStrategy.h"
#include "../include/selectionSortStrategy.h"

class SortingSuite : public ::testing::TestWithParam<SortingStrategy*>{
public:
    void SetUp() override{
        strategy = GetParam();
        context = new SortingContext(strategy);
    }

    void TearDown() override{
        delete context;
    }
protected:
    SortingContext *context{};
    SortingStrategy *strategy;
};

INSTANTIATE_TEST_SUITE_P(BubbleAndSelectionTests, SortingSuite, testing::Values(new BubbleSortStrategy, new SelectionSortStrategy));

#endif //MAIN_CPP_SORTINGTESTS_H
