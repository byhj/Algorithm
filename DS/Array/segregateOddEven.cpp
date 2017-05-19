/*
Given an array A[], write a function that segregates even and odd numbers. 
The functions should put all even numbers first, and then odd numbers.

Example

Input  = {12, 34, 45, 9, 8, 90, 3}
Output = {12, 34, 8, 90, 45, 9, 3} 
In the output, order of numbers can be changed, i.e., in the above example 
34 can come before 12 and 3 can come before 9.


Algorithm: segregateEvenOdd()
1) Initialize two index variables left and right:  
            left = 0,  right = size -1 
2) Keep incrementing left index until we see an odd number.
3) Keep decrementing right index until we see an even number.
4) If lef < right then swap arr[left] and arr[right]

*/

 void segregateOddEven(vector<int> &vec)
 {
 	int low = 0;
 	int high = vec.size()-1;
 	while (low < high) {
 		while (vec[low] %2 == 0 && low < high) ++low;
 		while (vec[high] %2 == 1 && low < high) -- high;
 		if (low < high) {
 			swap(vec[low++], vec[high--]);
		 }
	 }
 }
