#ifndef RANDOMIZED_H
#define RANDOMIZED_H

#include <iostream>
#include <vector>
using namespace std;

class RandomizedQuicksort {
    public:
        RandomizedQuicksort();
        void quicksort(vector<int>& arr, int left, int right);
        int partition(vector<int>& arr, int left, int right);   
};

#endif
