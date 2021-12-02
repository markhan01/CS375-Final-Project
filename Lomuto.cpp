#include "Lomuto.h"
#include <iostream>

Lomuto::Lomuto() {}

//return pointer to start of array
void Lomuto::quicksort(int arr[], int p, int r) {
    if (p < r) {
        int q = lomutoPartition(arr, p, r);
        for (int i = 0; i < 9; i ++)
            cout << arr[i] << " ";
        cout << "\n" << endl;
        quicksort(arr, p, q - 1);
        quicksort(arr, q + 1, r);
    }

}

//Takes the last element as the pivot
//j traverses the whole array
//p through i - 1 (inclusive) are less than pivot
//i throgh j (inclusive) are equal to or greater than pivot
//O(n^2) when array is sorted
int Lomuto::lomutoPartition(int arr[], int p, int r) {
    int pivot = arr[r];
    int i = (p - 1);

    for (int j = p; j <= r - 1; j ++){
        if (arr[j] <= pivot) {
            i ++;
            //swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    //swap arr[i+1] and arr[r]
    int temp = arr[i+1];
    arr[i+1] = arr[r];
    arr[r] = temp;

    return (i + 1);

}

