#include "../include/sortingStrategy.h"
#include "../include/selectionSortStrategy.h"

void SelectionSortStrategy::sort(int *array, int count) {
    for (int i = 0; i < count - 1; ++i) {
        int smallestIndex = findSmallestElementIndex(array, i, count);
        swap(array[i], array[smallestIndex]);
    }
}

int SelectionSortStrategy::findSmallestElementIndex(const int *array, int start, int count) {
    int smallestElementIndex = start;
    for (int i = start; i < count; ++i)
        smallestElementIndex = returnIndexOfSmallerValue(array[i], i, array[smallestElementIndex], smallestElementIndex);
    return smallestElementIndex;
}

int SelectionSortStrategy::returnIndexOfSmallerValue(int val1, int index1, int val2, int index2) {
    if (val1 < val2)
        return index1;
    return index2;
}

//class SelectionSortStrategy : public SortingStrategy{
//public:
//    void sort(int array[], int count) override{
//        for (int i = 0; i < count - 1; ++i) {
//            int smallestIndex = findSmallestElementIndex(array, i, count);
//            swap(array[i], array[smallestIndex]);
//        }
//    }
//private:
//    int findSmallestElementIndex(const int array[], int start, int count){
//        int smallestElementIndex = start;
//        for (int i = start; i < count; ++i)
//            smallestElementIndex = returnIndexOfSmallerValue(array[i], i, array[smallestElementIndex], smallestElementIndex);
//        return smallestElementIndex;
//    }
//
//    int returnIndexOfSmallerValue(int val1, int index1, int val2, int index2){
//        if (val1 < val2)
//            return index1;
//        return index2;
//    }
//};