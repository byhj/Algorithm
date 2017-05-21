/*
Bubble Sort
Bubble Sort is the simplest sorting algorithm that works by repeatedly
swapping the adjacent elements if they are in wrong order.

Worst and Average Case Time Complexity: O(n*n). Worst case occurs when array is reverse sorted.
Best Case Time Complexity: O(n). Best case occurs when array is already sorted.
Auxiliary Space: O(1)
Boundary Cases: Bubble sort takes minimum time (Order of n) when elements are already sorted.
Sorting In Place: Yes
Stable: Yes
*/

#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &vec) {
	int n = vec.size();
	bool swapped;
	//n-1 times, sort big element to end;
     for (int i = 0; i < n-1; ++i) {
     	swapped = false;
        for (int j = 0; j < n-i-1; ++j) { 
             if (vec[j] > vec[j+1]) {
                swap(vec[j], vec[j+1]);
                swapped = true;
			}
        }
        if (swapped == false) break;
     }
}

int main()
{
	vector<int> vec = {64, 34, 25, 12, 11, 90};
	bubbleSort(vec);
	for (auto val : vec) {
		cout << val << " ";
	}
	return 0;
}


