/*
ShellSort is mainly a variation of Insertion Sort. In insertion sort, we move 
elements only one position ahead. When an element has to be moved far ahead, 
many movements are involved. The idea of shellSort is to allow exchange of far 
items. In shellSort, we make the array h-sorted for a large value of h. We keep 
reducing the value of h until it becomes 1. An array is said to be h-sorted if 
all sublists of every h’th element is sorted.

Time Complexity: Time complexity of above implementation of shellsort is O(n2). 
In the above implementation gap is reduce by half in every iteration. There are 
many other ways to reduce gap which lead to better time complexity. See this for
 more details.
*/
// C++ implementation of Shell Sort
#include <iostream>
#include <vector>

using namespace std;

void shellSort(vector<int> &arr) 
{
	int n = arr.size();
    for (int gap = n/2; gap > 0; gap /= 2) {
         // Do a gapped insertion sort for this gap size.
        // The first gap elements a[0..gap-1] are already in gapped order
        // keep adding one more element until the entire array is
        // gap sorted 
        for (int i = gap; i < n; ++i) {
        	  // add a[i] to the elements that have been gap sorted
            // save a[i] in temp and make a hole at position i
            int temp = arr[i];
            int j;
            for (int j = i; j >= gap && arr[j-gap] > temp; j -= gap)  {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
    }
}




 
int main()
{
    vector<int> arr = {12, 34, 54, 2, 3};
    shellSort(arr);
    for (auto val : arr) {
    	cout << val << " ";
	}
 
    return 0;
}
