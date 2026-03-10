#include "sorting_algorithms.hpp"

void quickSort(vector<int> &arr){

    size_t arr_size = arr.size();
    if (!arr_size || arr_size == 1)
        return;

    int target = arr[arr_size / 2];
    vector<int> less;
    vector<int> equal;
    vector<int> more;

    for(size_t i = 0; i < arr_size; i++){
        if(arr[i] < target)
            less.push_back(arr[i]);
        else if(arr[i] > target)
            more.push_back(arr[i]);
        else
            equal.push_back(arr[i]);
    }

    quickSort(less);
    quickSort(more);

    size_t arr_index = 0;
    for(size_t i = 0; i < less.size(); i++)
        arr[arr_index++] = less[i];
    for(size_t i = 0; i < equal.size(); i++)
        arr[arr_index++] = equal[i];
    for(size_t i = 0; i < more.size(); i++)
        arr[arr_index++] = more[i];

}