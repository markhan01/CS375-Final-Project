#ifndef LOMUTO_H
#define LOMUTO_H

#include <iostream>
#include <vector>
using namespace std;

class Lomuto {
    public:
        Lomuto();
        void quicksort(vector<int>& arr, int p, int r);
        int lomutoPartition(vector<int>& arr, int p, int r);   

    private:

};

#endif
