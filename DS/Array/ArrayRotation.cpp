/*
Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements.

*/

// METHOD 1 (Use temp array)  Time complexity O(n)  Auxiliary Space: O(d)

//METHOD 2 Rotate one by one   Tiem : O(n*d)  Space: O(1);

//METHOD 3 Reverse Time Complexity: O(n)  Space: O(1);

#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
void rotate(vector<int> &vec, int pos) 
{
	reverse(vec.begin(), vec.begin()+pos);
	reverse(vec.begin()+pos, vec.end());
	reverse(vec.begin(), vec.end());
}

int main()
{
	vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
	rotate(vec, 2);
	
	return 0;
}
