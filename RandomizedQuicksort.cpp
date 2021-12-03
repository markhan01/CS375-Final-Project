#include <vector>
#include <stdlib.h>

int partition(std::vector<int>& arr, int left, int right) {
  int random = left + rand() % (right - left);
  std::swap(arr[random], arr[right]);
  int pivot = arr[right];
  int i = (left - 1);
  for (int j = left; j <= right - 1; j ++) {
    if (arr[j] <= pivot) {
	i++;
	std::swap(arr[i], arr[j]);
    }
  }
  std::swap(arr[i+1], arr[right]);
  return (i+1);
}

void randomized_quicksort(std::vector<int>& arr, int left, int right) {
  if (left < right) {
    int pivot = partition(arr, left, right);
    randomized_quicksort(arr, left, pivot-1);
    randomized_quicksort(arr, pivot+1, right);
  }
}
