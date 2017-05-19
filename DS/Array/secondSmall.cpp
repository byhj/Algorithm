/*
Write an efficient C program to find smallest and second smallest element in an array.

Example:

Input:  arr[] = {12, 13, 1, 10, 34, 1}
Output: The smallest element is 1 and 
        second Smallest element is 10
        
        
1.A Simple Solution is to sort the array in increasing order. 
 The first two elements in sorted array would be two smallest elements.
  Time complexity of this solution is O(n Log n).

2.A Better Solution is to scan the array twice. In first traversal find the
 minimum element. Let this element be x. In second traversal, find the smallest 
 element greater than x. Time complexity of this solution is O(n).   

 
3.An Efficient Solution can find the minimum two elements in one traversal. 
Algorithm:
1) Initialize both first and second smallest as INT_MAX
   first = second = INT_MAX
2) Loop through all the elements.
   a) If the current element is smaller than first, then update first 
       and second. 
   b) Else if the current element is smaller than second then update 
    second    
*/

void secondSmall(vector<int> vec)
{
	int first = INT_MAX;
	int second = INT_MAX;
	for (auto val : vec) {
		if (val < first) {  //small first or second
			second = first;
			first  = val;  //between first and second
		}else if (val < second && val != first) {
			second = val;
		}
	}
}
