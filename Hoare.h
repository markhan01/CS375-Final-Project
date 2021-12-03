#ifndef HOARE_H
#define HOARE_H

#include <iostream>
#include <vector>
using namespace std;

class Hoare {
	public:
		Hoare();
		void quicksort(vector<int>& arr, int p, int r);
		int hoarePartition(vector<int>& arr, int p, int r);
};

#endif
