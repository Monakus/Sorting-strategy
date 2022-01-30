#ifndef MAIN_CPP_SELECTIONSORTSTRATEGY_H
#define MAIN_CPP_SELECTIONSORTSTRATEGY_H

class SelectionSortStrategy : public SortingStrategy{
public:
    void sort(int array[], int count) override;
private:
    int findSmallestElementIndex(const int array[], int start, int count);
    int returnIndexOfSmallerValue(int val1, int index1, int val2, int index2);
};

#endif
