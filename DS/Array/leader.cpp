/*
Leaders in an array
Write a program to print all the LEADERS in the array. An element is leader 
if it is greater than all the elements to its right side. And the rightmost 
element is always a leader. For example int the array {16, 17, 4, 3, 5, 2}, 
leaders are 17, 5 and 2.

Method 1 (Simple)
Use two loops. The outer loop runs from 0 to size – 1 and one by one picks all
elements from left to right. The inner loop compares the picked element to all
 the elements to its right side. If the picked element is greater than all the 
 elements to its right side, then the picked element is the leader.
 
 O(n*n)
 
 Method 2 (Scan from right)
Scan all the elements from right to left in array and keep track of maximum till 
now. When maximum changes it's value, print it.
O(N)

 
*/

void leader(vector<int> vec)
{
	int sz = vec.size();
	int rightMax = vec[sz-1];
	cout << rightMax << " ";
	for (int i = sz-2; i >= 0; --i) {
		if (rightMax < vec[i]) {
			rightMax = vec[i];
			cout << rightMax << " ";
		}
	}
}
