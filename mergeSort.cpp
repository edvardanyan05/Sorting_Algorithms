#include "sorting_algorithms.hpp"

static void merge(vector<int> &arr, vector<int> &left , vector<int> &right){
    int i = 0 , j = 0 , k = 0;
    size_t left_size = left.size();
    size_t right_size = right.size();
    while(i < left_size && j < right_size){
        if(left[i] < right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while(i < left_size)
        arr[k++] = left[i++];
    while(j < right_size)
        arr[k++] = right[j++];
}

void mergeSort(vector<int> &arr){
    size_t arr_size = arr.size();
    if(arr_size <= 1)
        return;
    
    vector<int> left(arr_size / 2);
    for(int i = 0 ; i < arr_size / 2 ; ++i)   
        left[i] = arr[i];
        
    vector<int> right(arr_size - arr_size / 2);
    int k = 0;
    for(int i = arr_size / 2 ; i < arr_size ; ++i)
        right[k++] = arr[i];

    mergeSort(left);
    mergeSort(right);
    merge(arr,left,right);
}