#ifndef HOARE_H
#define HOARE_H

#include <iostream>
using namespace std;

class Hoare {
	public:
		Hoare();
		void quicksort(int arr[], int p, int r);
		int hoarePartition(int arr[], int p, int r);
};

#endif