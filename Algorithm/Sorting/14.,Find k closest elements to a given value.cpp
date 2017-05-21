/*
Given a sorted array arr[] and a value X, find the k closest elements to X in arr[]. 
Examples:

Input: K = 4, X = 35
       arr[] = {12, 16, 22, 30, 35, 39, 42, 
               45, 48, 50, 53, 55, 56}
Output: 30 39 42 45
Note that if the element is present in array, then it should not be in output, only the other closest elements are required.

In the following solutions, it is assumed that all elements of array are distinct.

A simple solution is to do linear search for k closest elements.
1) Start from the first element and search for the crossover point (The point before which elements are smaller than or equal to X and after which elements are greater). This step takes O(n) time.
2) Once we find the crossover point, we can compare elements on both sides of crossover point to print k closest elements. This step takes O(k) time.

The time complexity of the above solution is O(n).

An Optimized Solution is to find k elements in O(Logn + k) time. The idea is to use Binary Search to find the crossover point. Once we find index of crossover point, we can print k closest elements in O(k) time.

*/

#include <iostream>
#include <vector>

using namespace std;
int findCross(vector<int> &vec, int low, int high, int key)
{
	if (vec[low] > key) // all elements is lager than key
	   return low;
    if (vec[high] < key)
      return high;
      
      int mid = low + (high - low) / 2;
      if (vec[mid] <= key && vec[mid+1] > key) return mid;
      
      if (vec[mid] < key) return findCross(vec, mid+1, high, key);
      else return findCross(vec, low, mid-1, key);
}

vector<int> getKClosest(vector<int> &vec, int key, int k)
{
	//left and right begin index
	vector<int> ans;
	int n = vec.size();
	int left = findCross(vec, 0, vec.size()-1, key);
	int right = left+1;
	int cnt = 0;
	//if 
	if (vec[left] == key) --left;
	
	while (cnt < k && (left >= 0 || right < n)) {
		if (left < 0) ans.push_back(vec[left--]);
		else if (right >= n) ans.push_back(vec[right++]);
		else ans.push_back(key-vec[left] < vec[right]-key ? vec[left--] : vec[right++]); 
		++cnt;
	}
	return ans;
}

int main()
{
	vector<int> vec ={12, 16, 22, 30, 35, 39, 42,
               45, 48, 50, 53, 55, 56};
   int x = 35, k = 4;
   vector<int> ans = getKClosest(vec, x, 4);
   for (auto val : ans) {
   	cout << val << " ";
   }
   
   return 0;
}


