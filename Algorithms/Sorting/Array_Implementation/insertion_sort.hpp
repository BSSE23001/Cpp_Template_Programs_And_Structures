// Created by MuhammadHamza on 14/11/2024.

#ifndef INSERTION_SORT_HPP
#define INSERTION_SORT_HPP

void insertionSort(int *arr, const int &size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

#endif //INSERTION_SORT_HPP
