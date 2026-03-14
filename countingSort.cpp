#include "sorting_algorithms.hpp"

static size_t max_val(const vector <size_t> &arr, const size_t &arr_size){
    size_t max = 0;
    for (size_t i = 0; i < arr_size; i++)
        if(arr[i] > max)
            max = arr[i];
    return max;
}

void countingSort(vector<size_t> &arr){
    size_t arr_size = arr.size();
    if(arr_size <= 1)
        return;

    size_t maxVal = max_val(arr, arr_size);
    vector<size_t> counter(maxVal + 1);

    for(size_t i = 0; i < arr_size; i++)
        counter[arr[i]]++;
    
    size_t k = 0;
    for(size_t i = 0; i < maxVal + 1; i++){
        while(counter[i] != 0){
            arr[k++] = i;
            counter[i]--;
        }
    }
}