// Time : log2(n) when the arr already sorted 

#include <iostream>
#include <vector>

using namespace std;

//recursive
int binarySearchRec(vector<int> vec, int low, int high, int key)
{
    if (low <= high) {
        //avoid overflow
       int mid = low + (high - low) / 2;
       if (vec[mid] == key) return mid;
       else if (vec[mid] > key) return binarySearchRec(vec, low, mid-1, key);
       else return binarySearchRec(vec, mid+1, high, key);
    }
    return -1;
}

//Iterative
int binarySearchIter(vector<int> vec, int low, int high, int key)
{
   while (low <= high) {
        int mid = low + (high - low) / 2;
        if (vec[mid] == key) return mid;
        else if (vec[mid] > key) high = mid - 1;
        else low = mid + 1;
   }
   return -1;
}

int main()
{
    vector<int> vec = {2, 3, 4, 10, 40};
    cout << binarySearchRec(vec, 0, vec.size()-1, 10) << endl;
    cout << binarySearchIter(vec, 0, vec.size()-1, 10) << endl;
    return 0;
}
