#include "Lomuto.h"
#include <iostream>

Lomuto::Lomuto() {}

void Lomuto::quicksort(vector<int>& vec, int p, int r) {
    if (p < r) {
        int q = lomutoPartition(vec, p, r);
        quicksort(vec, p, q - 1);
        quicksort(vec, q + 1, r);
    }

}

int Lomuto::lomutoPartition(vector<int>& vec, int p, int r) {
    int pivot = vec[r];
    int i = (p - 1);

    for (int j = p; j <= r - 1; j++){
        if (vec[j] <= pivot) {
            i ++;
            swap(vec[i], vec[j]);
            numSwaps++;
        }
    }
    swap(vec[i+1], vec[r]);
    numSwaps++;
    return (i + 1);

}

int Lomuto::getNumSwaps() {
    int temp = numSwaps;
    numSwaps = 0;
    return temp;
}
