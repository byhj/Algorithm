/*

A Product Array Puzzle
Given an array arr[] of n integers, construct a Product Array prod[] 
(of same size) such that prod[i] is equal to the product of all the elements 
of arr[] except arr[i]. Solve it without division operator and in O(n).

Example:
arr[] = {10, 3, 5, 6, 2}
prod[] = {180, 600, 360, 300, 900}


Algorithm:
1) Construct a temporary array left[] such that left[i] contains product of all
 elements on left of arr[i] excluding arr[i].
2) Construct another temporary array right[] such that right[i] contains 
product of all elements on on right of arr[i] excluding arr[i].
3) To get prod[], multiply left[] and right[].

Time Complexity: O(n)
Space Complexity: O(n)
Auxiliary Space: O(n)

*/ 

vector<int> product(vector<int> vec)
{
	vector<int> ans(vec.size());
	ans[0] = 1;
	//multi left exclude vec[i]
	for (int i = 1; i < vec.siz(); ++i) {
		ans[i] = ans[i-1] * vec[i-1];
	}
	int right = 1;
	for (int i = n-1; i >= 0; --i) {
		ans[i] *= right;
		right *= vec[i];
    }
    return ans;
}
	
}
