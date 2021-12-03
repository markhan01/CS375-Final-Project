#include <iostream>
#include <fstream>
#include <sstream>
#include <chrono>
#include "Lomuto.h"
#include "Hoare.h"
#include "RandomizedQuicksort.h"
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
    string input_text, line;
    input_text = argv[1];
    
    ifstream input_file (input_text); 
    int val;
    vector<int> hoare_array;
    vector<int> lomuto_array;
    vector<int> randomized_array;
    Hoare hoare;
    Lomuto lomuto;
    RandomizedQuicksort randomized;

    if (input_file.is_open()) {
        while (getline(input_file, line)) {
            stringstream s(line);
            s >> val;
            hoare_array.push_back(val);
            lomuto_array.push_back(val);
            randomized_array.push_back(val);
        }
        
		auto startTime = chrono::high_resolution_clock::now();
	 	hoare.quicksort(hoare_array, 0, hoare_array.size() - 1);
		auto endTime = chrono::high_resolution_clock::now();
		auto duration = endTime - startTime;
		auto hoare_runtime = chrono::duration_cast<chrono::milliseconds>(duration).count();
		
		startTime = chrono::high_resolution_clock::now();
		lomuto.quicksort(lomuto_array, 0, lomuto_array.size() - 1);
		endTime = chrono::high_resolution_clock::now();
		duration = endTime - startTime;
		auto lomuto_runtime = chrono::duration_cast<chrono::milliseconds>(duration).count();
		
		startTime = chrono::high_resolution_clock::now();
		randomized.quicksort(randomized_array, 0, randomized_array.size() - 1);
		endTime = chrono::high_resolution_clock::now();
		duration = endTime - startTime;
		auto randomized_runtime = chrono::duration_cast<chrono::milliseconds>(duration).count();
		
		/*
		for (int i = 0; i < hoare_array.size(); i++) {
			cout << hoare_array[i] << endl;
		}
		
		cout << endl;
		for (int i = 0; i < lomuto_array.size(); i++) {
			cout << lomuto_array[i] << endl;
		}
		cout << endl;
		for (int i = 0; i < randomized_array.size(); i++) {
			cout << randomized_array[i] << endl;
		}
		*/
		
		cout << "Hoare Runtime: " << hoare_runtime << endl;
		cout << "Lomuto Runtime: " << lomuto_runtime << endl;
		cout << "Randomized Runtime: " << randomized_runtime << endl;
		
    }
}
