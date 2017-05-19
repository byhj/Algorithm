/*
You are given an array of 0s and 1s in random order. Segregate 0s on left side and 1s on right side of the array. Traverse array only once.

Input array   =  [0, 1, 0, 1, 0, 0, 1, 1, 1, 0] 
Output array =  [0, 0, 0, 0, 0, 1, 1, 1, 1, 1] 
Method 1 (Count 0s or 1s) 
Thanks to Naveen for suggesting this method.
1) Count the number of 0s. Let count be C.
2) Once we have count, we can put C 0s at the beginning and 1s at the remaining n ¨C C positions in array.

Time Complexity: O(n)


Method 2 (Use two indexes to traverse)
Maintain two indexes. Initialize first index left as 0 and second index right as n-1.

Do following while left < right
a) Keep incrementing index left while there are 0s at it
b) Keep decrementing index right while there are 1s at it
c) If left < right then exchange arr[left] and arr[right]

*/


 void segregate01(vector<int> &vec)
 {
 	int low = 0;
 	int high = vec.size()-1;
 	while (low < high) {
 		while (vec[low] == 0 && low < high) ++low;
 		while (vec[high] == 1 && low < high) -- high;
 		if (low < high) {
 			swap(vec[low++], vec[high--]);
		 }
	 }
 }
