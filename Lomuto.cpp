#include "Lomuto.h"

extern int lomuto_swap_count;

Lomuto::Lomuto() {}

void Lomuto::quicksort(vector<int>& arr, int p, int r) {
    if (p < r) {
        int q = lomutoPartition(arr, p, r);
        quicksort(arr, p, q - 1);
        quicksort(arr, q + 1, r);
    }

}

int Lomuto::lomutoPartition(vector<int>& arr, int p, int r) {
    int pivot = arr[r];
    int i = (p - 1);

    for (int j = p; j <= r - 1; j ++){
        if (arr[j] <= pivot) {
            i ++;
            swap(arr[i], arr[j]);
            lomuto_swap_count++;
        }
    }

    swap(arr[i+1], arr[r]);
	lomuto_swap_count++;

    return (i + 1);

}
