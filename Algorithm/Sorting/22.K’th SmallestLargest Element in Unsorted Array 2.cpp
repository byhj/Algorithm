/*
Given an array and a number k where k is smaller than size of array, we need to find the k’th smallest element in the given array. It is given that ll array elements are distinct.

Examples:

Input: arr[] = {7, 10, 4, 3, 20, 15}
       k = 3
Output: 7

Input: arr[] = {7, 10, 4, 3, 20, 15}
       k = 4
Output: 10

Time Complexity: 
The worst case time complexity of the above solution is still O(n2). In worst
 case, the randomized function may always pick a corner element. The expected
  time complexity of above randomized QuickSelect is T(n), 
*/

#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>

using namespace std;

int partition(vector<int> &vec, int low, int high)
{
	int pivot = vec[high];
	int i = low-1;
	for (int j = low; j < high; ++j) {
		if (vec[j] < pivot) {
			swap(vec[++i], vec[j]);
		}
	}
	swap(vec[i+1], vec[high]);
	return i+1;
}

int randPartition(vector<int> &vec, int low, int high)
{
	int n = high-low+1;
	int pivot = rand() % n;
	swap(vec[low+pivot], vec[high]);
	return partition(vec, low, high);
}


int kthSmallest(vector<int> &vec, int low, int high, int k)
{
	if (k > 0 && k <= high-low+1) {
		int pos = randPartition(vec, low, high);
		if (pos-low == k-1) return vec[pos];
		if (pos-low > k-1) return kthSmallest(vec, low, pos-1, k);
		else return kthSmallest(vec, pos+1, high, k-pos+low-1);
	}
	return INT_MAX;
}


int main()
{
	vector<int> vec = {12, 3, 5, 7,4, 19, 26};
	cout << kthSmallest(vec, 0, 6, 3);
	return 0;
}

