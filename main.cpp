#include "sorts.h"



int main(){
    auto *context = new SortingContext(new BubbleSortStrategy);
    int array[] = {8, 3, 5, 5, 7, 6, 1, 3, 4};
    context->doSorting(array, 9);
    SortingContext::printArray(array, 9);

    context->set_strategy(new SelectionSortStrategy);
    int array2[] = {8, 3, 5, 5, 7, 6, 1, 3, 4};
    context->doSorting(array2, 9);
    SortingContext::printArray(array2, 9);
    return 0;
}
