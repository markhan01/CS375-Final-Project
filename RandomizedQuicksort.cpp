#include "RandomizedQuicksort.h"

extern int randomized_swap_count;

RandomizedQuicksort::RandomizedQuicksort() {
  srand(time(NULL));
}

int RandomizedQuicksort::partition(vector<int>& arr, int left, int right) {
	int random = left + rand() % (right - left);
	swap(arr[random], arr[right]);
	randomized_swap_count++;
	int pivot = arr[right];
	int i = (left - 1);
	for (int j = left; j <= right - 1; j ++) {
		if (arr[j] <= pivot) {
			i++;
			swap(arr[i], arr[j]);
			randomized_swap_count++;
		}
	}
	swap(arr[i+1], arr[right]);
	randomized_swap_count++;
	return (i+1);
}

void RandomizedQuicksort::quicksort(vector<int>& arr, int left, int right) {
	if (left < right) {
		int pivot = partition(arr, left, right);
		quicksort(arr, left, pivot-1);
		quicksort(arr, pivot+1, right);
	}
}

