#include "Hoare.h"

Hoare::Hoare() {}

void Hoare::quicksort(vector<int>& arr, int p, int r) {
	if (p < r) {
		int q = hoarePartition(arr, p, r);
		quicksort(arr, p, q);
		quicksort(arr, q + 1, r);
	}
}

int Hoare::hoarePartition(vector<int>& arr, int p, int r) {
	int x = arr[p];
	int i = p - 1;
	int j = r + 1;
	
	while (true) {
		do {
			j--;
		} while (arr[j] > x);
		
		do {
			i++;
		} while (arr[i] < x);
		
		if (i < j) {
			swap(arr[i], arr[j]);
		} else {
			return j;
		}
	}
}
