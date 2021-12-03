#include <vector>
using namespace std;

class Lomuto {
    public:
        Lomuto();
        void quicksort(vector<int>& vec, int p, int r);
        int lomutoPartition(vector<int>& vec, int p, int r); 
        int getNumSwaps();  

    private:
        int numSwaps;
};
