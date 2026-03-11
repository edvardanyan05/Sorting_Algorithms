#include "sorting_algorithms.hpp"

static void merge(vector<int> &arr, vector<int> &left , vector<int> &right){
    int i = 0 , j = 0 , k = 0;
    while(i < left.size() && j < right.size()){
        if(left[i] < right[j])
            arr[k++] = left[i++];
        else
            arr[k++] = right[j++];
    }
    while(i < left.size())
        arr[k++] = left[i++];
    while(j < right.size())
        arr[k++] = right[j++];
}

void mergeSort(vector<int> &arr){
    if(arr.size() <= 1)
        return;
    
    vector<int> left(arr.size() / 2);
    for(int i = 0 ; i < arr.size() / 2 ; ++i)   
        left[i] = arr[i];
        
    vector<int> right(arr.size() - arr.size() / 2);
    int k = 0;
    for(int i = arr.size() / 2 ; i < arr.size() ; ++i)
        right[k++] = arr[i];

    mergeSort(left);
    mergeSort(right);
    merge(arr,left,right);
}