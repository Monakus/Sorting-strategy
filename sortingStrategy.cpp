#include <iostream>
#include "sortingStrategy.h"

void SortingStrategy::swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

SortingContext::SortingContext(SortingStrategy *sortingStrat) : sortingStrategy(sortingStrat){}

SortingContext::~SortingContext() {
    delete this->sortingStrategy;
}

void SortingContext::set_strategy(SortingStrategy *sortingStrat) {
    delete this->sortingStrategy;
    this->sortingStrategy = sortingStrat;
}

void SortingContext::doSorting(int *array, int count) const {
    this->sortingStrategy->sort(array, count);
}

void SortingContext::printArray(int *array, int count) {
    for (int i = 0; i < count - 1; ++i) {
        std::cout << array[i] << ", ";
    }
    std::cout << array[count-1] << std::endl;
}

//class SortingStrategy{
//protected:
//    static void swap(int& a, int& b){
//        int temp = a;
//        a = b;
//        b = temp;
//    }
//public:
//    virtual ~SortingStrategy() = default;
//    virtual void sort(int array[], int count) = 0;
//};
//
//class SortingContext{
//private:
//    SortingStrategy *sortingStrategy;
//public:
//    explicit SortingContext(SortingStrategy *sortingStrat = nullptr) : sortingStrategy(sortingStrat){};
//    ~SortingContext(){
//        delete this->sortingStrategy;
//    }
//
//    void set_strategy(SortingStrategy *sortingStrat){
//        delete this->sortingStrategy;
//        this->sortingStrategy = sortingStrat;
//    }
//
//    void doSorting(int array[], int count) const{
//        this->sortingStrategy->sort(array, count);
//    }
//
//    static void printArray(int array[], int count){
//        for (int i = 0; i < count - 1; ++i) {
//            std::cout << array[i] << ", ";
//        }
//        std::cout << array[count-1] << std::endl;
//    }
//};