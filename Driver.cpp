#include <iostream>
#include <fstream>
#include <sstream>
#include <chrono>
#include "Lomuto.h"
#include "RandomizedQuicksort.cpp"
using namespace std;

int main(int argc, char *argv[]) {
    string input_text, line;
    input_text = argv[1];
    ifstream input_file (input_text); 
    int val;
    vector<int> vec;

    if (input_file.is_open()) {
        while (getline(input_file, line)) {
            stringstream s(line);
            s >> val;
            vec.push_back(val);
        }








        vector<int>::iterator it;
        for (it = vec.begin(); it != vec.end(); it ++)
            cout << *it << "\n";
    }
}