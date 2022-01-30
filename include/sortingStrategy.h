#ifndef MAIN_CPP_SORTINGSTRATEGY_H
#define MAIN_CPP_SORTINGSTRATEGY_H

#include <iostream>

class SortingStrategy{
protected:
    static void swap(int& a, int& b);
public:
    virtual ~SortingStrategy() = default;
    virtual void sort(int array[], int count) = 0;
};

class SortingContext{
private:
    SortingStrategy *sortingStrategy;
public:
    explicit SortingContext(SortingStrategy *sortingStrat = nullptr);
    ~SortingContext();

    void set_strategy(SortingStrategy *sortingStrat);
    void doSorting(int array[], int count) const;
    static void printArray(int array[], int count);
};

#endif
