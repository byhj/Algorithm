/*
Selection Sort

The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order)
from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.
1) The subarray which is already sorted.
2) Remaining subarray which is unsorted.

Time Complexity: O(n2) as there are two nested loops.
Auxiliary Space: O(1)
The good thing about selection sort is it never makes more than O(n) swaps
 and can be useful when memory write is a costly operation.
*/

#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int> &vec) {
     int n = vec.size();
     //n-1 times; after that, the n element already sorted
     for (int i = 0; i < n-1; ++i) {
         int minIndex = i;
         //find the unsorted arr, which is min val
         for (int j = i+1; j < n; ++j) {
             if (vec[j] < vec[minIndex])
                 minIndex = j;
         }
         swap(vec[minIndex], vec[i]);
     }
}


int main()
{
	
    vector<int> vec = {64, 25, 12, 22, 11};
    selectionSort(vec);
    for (auto val : vec) {
    	cout << val << " ";
	}
    return 0;
}
