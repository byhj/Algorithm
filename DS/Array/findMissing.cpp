/*
You are given a list of n-1 integers and these integers are in the range of 1 to n. 
There are no duplicates in list. One of the integers is missing in the list. 
Write an efficient code to find the missing integer.

*/

#include <iostream>
#include <vector>

using namespace std;

/*
METHOD 1(Use sum formula)
Algorithm:

1. Get the sum of numbers 
       total = n*(n+1)/2
2  Subtract all the numbers from sum and
   you will get the missing number.
*/

int findMissing(vector<int> vec)
{
	int n = vec.size() + 1;
	long long total = n * (n + 1) / 2;
	for (int i = 0; i < vec.size(); ++i) {
		total -= vec[i];
	}
	return total;
}

/*
METHOD 2(Use XOR)

  1) XOR all the array elements, let the result of XOR be X1.
  2) XOR all numbers from 1 to n, let XOR be X2.
  3) XOR of X1 and X2 gives the missing number.

*/
int findMissingBit(vector<int> vec)
{
	// 1 ^ 1 ... n ^ n = 0
	int x1 = 0;
	int x2 = 0;
	for (auto val : vec) {
		x1 ^= val;
	}
	for (int i = 1; i <= vec.size()+1; ++i) {
	    x2^= i;
	}
	return x1 ^ x2;
}

int main()
{
    vector<int> vec = {1, 2, 4, 5, 6};
    cout << findMissing(vec);
    getchar();
}


