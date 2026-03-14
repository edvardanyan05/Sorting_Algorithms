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
    cout << "Time (Average Case): O(nlogn)\n";
    cout << "Time (Worst   Case): O(n^2)\n";
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

    //Bubble Sort Part
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

    //Insertion Sort Part
    vector<int> insertion_vector(10);
    cout << "Generating random numbers for Insertion Sort: ";
    for(int i = 0; i < insertion_vector.size(); i++){
        insertion_vector[i] = rand() % 100;
        cout << insertion_vector[i] << " ";
    }
    cout << "\n\nRunning insertion sort...\n";
    cout << "Time (Best Case): O(n)\n";
    cout << "Time (Worst & Average Case): O(n^2)\n";
    insertionSort(insertion_vector);
    cout << "\nSorted numbers: ";
    for(int i = 0; i < insertion_vector.size(); i++)
        cout << insertion_vector[i] << " ";
    cout << "\n\nInsertion Sort finished successfully!\n----------------------------------------------------------------------------------------------------\n";

    //Counting Sort Part
    vector<size_t> counting_vector(10);
    cout << "Generating random numbers for Counting Sort: ";
    for(int i = 0; i < counting_vector.size(); i++){
        counting_vector[i] = rand() % 16;
        cout << counting_vector[i] << " ";
    }
    cout << "\n\nRunning counting sort...\n";
    cout << "Time: O(n+k)\n";
    countingSort(counting_vector);
    cout << "\nSorted numbers: ";
    for(int i = 0; i < counting_vector.size(); i++)
        cout << counting_vector[i] << " ";
    cout << "\n\nCounting Sort finished successfully!\n----------------------------------------------------------------------------------------------------\n";


    return 0;
}