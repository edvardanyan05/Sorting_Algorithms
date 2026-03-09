#include "sorting_algorithms.hpp"

int main() {

    //Merge Sort Part
    vector<int> merge_vector(10);
    cout << "Generating random numbers for Merge Sort:\n";
    for(int i = 0; i < merge_vector.size(); i++){
        merge_vector[i] = rand() % 100;
        cout << merge_vector[i] << " ";
    }
    cout << "\n\nRunning merge sort...\n";
    merge_sort(merge_vector);
    cout << "\nSorted numbers:\n";
    for(int i = 0; i < merge_vector.size(); i++)
        cout << merge_vector[i] << " ";
    cout << "\n\nMerge sort finished successfully!\n";


    return 0;
}