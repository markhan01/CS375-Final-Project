#include "RandomizedQuicksort.h"

RandomizedQuicksort::RandomizedQuicksort() {}

int RandomizedQuicksort::partition(vector<int>& arr, int left, int right) {
	int random = left + rand() % (right - left);
	swap(arr[random], arr[right]);
	int pivot = arr[right];
	int i = (left - 1);
	for (int j = left; j <= right - 1; j ++) {
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i+1], arr[right]);
	return (i+1);
}

void RandomizedQuicksort::quicksort(vector<int>& arr, int left, int right) {
	if (left < right) {
		int pivot = partition(arr, left, right);
		quicksort(arr, left, pivot-1);
		quicksort(arr, pivot+1, right);
	}
}

