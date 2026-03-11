#include "sorting_algorithms.hpp"

void bubbleSort(vector<int> &arr){
    size_t arr_size = arr.size();

    if(arr_size <= 1)
        return;

    for(size_t i = 0; i < arr_size - 1; i++){
        for(size_t j = 0; j < arr_size - i - 1; j++){
            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}