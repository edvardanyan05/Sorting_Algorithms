#include "sorting_algorithms.hpp"

void insertionSort(vector<int> &arr){
    size_t arr_size = arr.size();
    if (!arr_size || arr_size == 1)
        return;

    for(size_t i = 1; i < arr.size(); i++){
    int current = arr[i];
    size_t j = i;
    while(j > 0 && arr[j - 1] > current){
        arr[j] = arr[j - 1];
        j--;
    }
    arr[j] = current;
    }
}
