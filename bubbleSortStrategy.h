#ifndef MAIN_CPP_BUBBLESORTSTRATEGY_H
#define MAIN_CPP_BUBBLESORTSTRATEGY_H

#include "sortingStrategy.h"

class BubbleSortStrategy : public SortingStrategy{
public:
    void sort(int array[], int count) override;
private:
    int innerBubbleSort(int array[], int count);
    int checkAndSwap(int& val1, int& val2);
    int shouldBeSwapped(int val1, int val2);
};

#endif
