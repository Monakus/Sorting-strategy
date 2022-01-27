#ifndef MAIN_CPP_SORTS_H
#define MAIN_CPP_SORTS_H

#include <iostream>

class SortingStrategy{
protected:
    static void swap(int& a, int& b){
        int temp = a;
        a = b;
        b = temp;
    }
public:
    virtual ~SortingStrategy() = default;
    virtual void sort(int array[], int count) = 0;
};

class SortingContext{
private:
    SortingStrategy *sortingStrategy;
public:
    explicit SortingContext(SortingStrategy *sortingStrat = nullptr) : sortingStrategy(sortingStrat){};
    ~SortingContext(){
        delete this->sortingStrategy;
    }

    void set_strategy(SortingStrategy *sortingStrat){
        delete this->sortingStrategy;
        this->sortingStrategy = sortingStrat;
    }

    void doSorting(int array[], int count) const{
        this->sortingStrategy->sort(array, count);
    }

    static void printArray(int array[], int count){
        for (int i = 0; i < count - 1; ++i) {
            std::cout << array[i] << ", ";
        }
        std::cout << array[count-1] << std::endl;
    }
};

class BubbleSortStrategy : public SortingStrategy{
public:
    void sort(int array[], int count) override{
        while(innerBubbleSort(array, count));
    }
private:
    int innerBubbleSort(int array[], int count){
        int changesCount = 0;
        for (int i = 0; i < count - 1; ++i){
            if (shouldBeSwapped(array[i], array[i+1])){
                swap(array[i], array[i+1]);
                changesCount++;
            }
        }
        return changesCount;
    }

    int shouldBeSwapped(int a, int b){
        return a > b;
    }

//    void swapIf()
};

class SelectionSortStrategy : public SortingStrategy{
public:
    void sort(int array[], int count) override{
        for (int i = 0; i < count; ++i) {
            int index = findSmallestElementIndex(array, i, count);
            swap(array[i], array[index]);
        }
    }
private:
    int findSmallestElementIndex(const int array[], int start, int count){
        int smallestElementIndex = start;
        for (int i = start; i < count; ++i){
            if (array[i] < array[smallestElementIndex])
                smallestElementIndex = i;
        }
        return smallestElementIndex;
    }
};

#endif //MAIN_CPP_SORTS_H
