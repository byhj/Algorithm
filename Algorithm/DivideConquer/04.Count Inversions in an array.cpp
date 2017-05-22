/*
Inversion Count for an array indicates ¨C how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally speaking, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j

Example:
The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).

*/

//For each element, count number of elements which are on right side of it and are smaller than it.
//Time O(n*n)

int countInv(vector<int> vec)
{
 	int n = vec.size();
 	int cnt = 0;
 	for (int i = 0; i < n-1; ++i) {
 		for (int j = i+1; j < n; ++j) {
 			if (vec[i] > vec[j])
 			   ++cnt;
		 }
	 }
	 return cnt;
} 

/*
Time Complexity: O(n^2)
METHOD 2(Enhance Merge Sort)
Suppose we know the number of inversions in the left half and right half of the array (let be inv1 and inv2), what kinds of inversions are not accounted for in Inv1 + Inv2? The answer is – the inversions we have to count during the merge step. Therefore, to get number of inversions, we need to add number of inversions in left subarray, right subarray and merge().

*/



 
 
