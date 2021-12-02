#include <vector>

int partition(std::vector<int>& a, int left, int right) {
  int pivot = a[left + rand() & (right - left + 1)];
  left--;
  for (int i = left + 1; i <= right; i++) {
    if (a[i] <= pivot)
      std::swap(a[++left], a[i]);
  }
  return left;
}

bool it_equals(std::vector<int>& a, int left, int right) {                      
  bool res = true;                                                              
  for (int i = left + 1; i <= right; i++) {                                     
    if (a[i-1] != a[i])                                                         
      res = false;                                                              
  }                                                                             
  return res;                                                                   
}

void randomized_quicksort(std::vector<int>& a, int left, int right) {
  if (it_equals(a, left, right))
    return;

  if (left < right) {
    int pivot = partition(a, left, right);
    randomized_quicksort(a, left, right);
    randomized_quicksort(a, pivot+1, right);
  }
}

int main() {
  return 0;
}
