/*
Given a binary array sorted in non-increasing order, count the number of 1’s in it.

Examples:

Input: arr[] = {1, 1, 0, 0, 0, 0, 0}
Output: 2

Input: arr[] = {1, 1, 1, 1, 1, 1, 1}
Output: 7

Input: arr[] = {0, 0, 0, 0, 0, 0, 0}
Output: 0
A simple solution is to linearly traverse the array. The time complexity of the simple solution is O(n). We can use Binary Search to find count in O(Logn) time. The idea is to look for last occurrence of 1 using Binary Search. Once we find the index last occurrence, we return index + 1 as count.

The following is C++ implementation of above idea.
*/

int countOnes(vector<int> &vec, int low, int high)
{
	if (low <= high) {
		int mid = low + (high-low)/2;
		
		if (vec[mid]==1 && (mid == high || vec[mid+1] == 0)) returm mid+1;
		if (vec[mid] == 1) return countOnes(vec, mid+1, high);
		else return countOnes(vec, low, mid-1);
	}
	return 0;
}
