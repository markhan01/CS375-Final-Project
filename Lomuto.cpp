#include "Lomuto.h"

Lomuto::Lomuto() {}

//return pointer to start of array
void Lomuto::quicksort(vector<int>& arr, int p, int r) {
    if (p < r) {
        int q = lomutoPartition(arr, p, r);
        quicksort(arr, p, q - 1);
        quicksort(arr, q + 1, r);
    }

}

//Takes the last element as the pivot
//j traverses the whole array
//p through i - 1 (inclusive) are less than pivot
//i throgh j (inclusive) are equal to or greater than pivot
//O(n^2) when array is sorted
int Lomuto::lomutoPartition(vector<int>& arr, int p, int r) {
    int pivot = arr[r];
    int i = (p - 1);

    for (int j = p; j <= r - 1; j ++){
        if (arr[j] <= pivot) {
            i ++;
            //swap arr[i] and arr[j]
            swap(arr[i], arr[j]);
        }
    }

    //swap arr[i+1] and arr[r]
    swap(arr[i+1], arr[r]);

    return (i + 1);

}
