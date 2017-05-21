/*
Comb Sort is mainly an improvement over Bubble Sort. Bubble sort always compares adjacent values. So all inversions are removed one by one. Comb Sort improves on Bubble Sort by using gap of size more than 1. The gap starts with a large value and shrinks by a factor of 1.3 in every iteration until it reaches the value 1. Thus Comb Sort removes more than one inversion counts with one swap and performs better than Bublle Sort.

The shrink factor has been empirically found to be 1.3 (by testing Combsort on over 200,000 random lists) [Source: Wiki]

Although, it works better than Bubble Sort on average, worst case remains O(n2).
*/

#include <iostream>
#include <vector>

using namespace std;

int getNextGap(int gap) 
{
    gap = (gap * 10) / 13;
    if (gap < 1) return 1;

    return gap;
}

void combSort(vector<int> &arr) 
{
	int n = arr.size();
    int gap = n;
    bool swapped = true;
    while (gap != 1 || swapped == true) {
        gap = getNextGap(gap);
        swapped =false;

        //compare all elements with current gap
        for (int i = 0; i < n - gap; ++i) {
             if (arr[i] > arr[i+gap]) {
                 swap(arr[i], arr[i+gap]);
                 swapped = true;
             }
        }
    }
}

int main()
{
    vector<int> arr= {8, 4, 1, 56, 3, -44, 23, -6, 28, 0};

    combSort(arr);
    for (auto val : arr) {
    	cout << val << " ";
	}

    return 0;
}
