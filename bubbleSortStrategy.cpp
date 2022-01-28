#include "sortingStrategy.h"
#include "bubbleSortStrategy.h"

void BubbleSortStrategy::sort(int *array, int count) {
    while(innerBubbleSort(array, count));
}

int BubbleSortStrategy::innerBubbleSort(int *array, int count) {
    int changesCount = 0;
    for (int i = 0; i < count - 1; ++i)
        changesCount += checkAndSwap(array[i], array[i+1]);
    return changesCount;
}

int BubbleSortStrategy::checkAndSwap(int &val1, int &val2) {
    if (shouldBeSwapped(val1, val2)){
        swap(val1, val2);
        return 1;
    }
    return 0;
}

int BubbleSortStrategy::shouldBeSwapped(int val1, int val2) {
    return val1 > val2;
}

//class BubbleSortStrategy : public SortingStrategy{
//public:
//    void sort(int array[], int count) override{
//        while(innerBubbleSort(array, count));
//    }
//private:
//    int innerBubbleSort(int array[], int count){
//        int changesCount = 0;
//        for (int i = 0; i < count - 1; ++i)
//            changesCount += checkAndSwap(array[i], array[i+1]);
//        return changesCount;
//    }
//
//    int checkAndSwap(int& val1, int& val2){
//        if (shouldBeSwapped(val1, val2)){
//            swap(val1, val2);
//            return 1;
//        }
//        return 0;
//    }
//
//    int shouldBeSwapped(int val1, int val2){
//        return val1 > val2;
//    }
//};