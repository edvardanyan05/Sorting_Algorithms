#include "sorting_algorithms.hpp"

int main() {
    cout << "----------------------------------------------------------------------------------------------------\n";
    //Quick Sort Part
    vector<int> quick_vector(10);
    cout << "Generating random numbers for Quick Sort: ";
    for(int i = 0; i < quick_vector.size(); i++){
        quick_vector[i] = rand() % 100;
        cout << quick_vector[i] << " ";
    }
    cout << "\n\nRunning quick sort...\n";
    cout << "Time: O(nlogn)\n";
    quickSort(quick_vector);
    cout << "\nSorted numbers: ";
    for(int i = 0; i < quick_vector.size(); i++)
        cout << quick_vector[i] << " ";
    cout << "\n\nQuick Sort finished successfully!\n----------------------------------------------------------------------------------------------------\n";

    //Merge Sort Part
    vector<int> merge_vector(10);
    cout << "Generating random numbers for Merge Sort: ";
    for(int i = 0; i < merge_vector.size(); i++){
        merge_vector[i] = rand() % 100;
        cout << merge_vector[i] << " ";
    }
    cout << "\n\nRunning merge sort...\n";
    cout << "Time: O(nlogn)\n";
    mergeSort(merge_vector);
    cout << "\nSorted numbers: ";
    for(int i = 0; i < merge_vector.size(); i++)
        cout << merge_vector[i] << " ";
    cout << "\n\nMerge Sort finished successfully!\n---------------------------------------------------------------------------------------------------\n";

    //bubble Sort Part
    vector<int> bubble_vector(10);
    cout << "Generating random numbers for Bubble Sort: ";
    for(int i = 0; i < bubble_vector.size(); i++){
        bubble_vector[i] = rand() % 100;
        cout << bubble_vector[i] << " ";
    }
    cout << "\n\nRunning bubble sort...\n";
    cout << "Time: O(n^2)\n";
    bubbleSort(bubble_vector);
    cout << "\nSorted numbers: ";
    for(int i = 0; i < bubble_vector.size(); i++)
        cout << bubble_vector[i] << " ";
    cout << "\n\nBubble Sort finished successfully!\n----------------------------------------------------------------------------------------------------\n";


    return 0;
}