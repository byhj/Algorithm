/*
METHOD 1 (Use Sorting)

Algorithm:

hasArrayTwoCandidates (A[], ar_size, sum)
1) Sort the array in non-decreasing order.
2) Initialize two index variables to find the candidate 
   elements in the sorted array.
       (a) Initialize first to the leftmost index: l = 0
       (b) Initialize second  the rightmost index:  r = ar_size-1
3) Loop while l < r.
       (a) If (A[l] + A[r] == sum)  then return 1
       (b) Else if( A[l] + A[r] <  sum )  then l++
       (c) Else r--    
4) No candidates in whole array - return 0
*/

#include <iostream>
#include <algorithm>
#include <unordered_set>

bool hasSum(vector<int> &vec, int sum) { 
     sort(vec.begin(), vec.end());
     int beg = 0;
     int end = vec.size()-1;
     
     while (beg < end) {
     	int x = vec[beg] + vec[end];
     	if (x == sum) return true;
     	if (x  > sum) --end;
     	if (x  < sum) ++beg;
	 }
	 return false;	
}

/*
METHOD 2 (Use Hash Map)

1) Initialize Binary Hash Map M[] = {0, 0, ...}
2) Do following for each element A[i] in A[]
   (a)	If M[x - A[i]] is set then print the pair (A[i], x - A[i])
   (b)	Set M[A[i]]
*/
bool hasSum(vector<int> &vec, int sum) { 
     unordered_set<int> valSet;
     
     for (auto val : vec) {
     	if (valSet.find(sum-val) != valSet.end()) return true;
     	else valSet.insert(val);
	}
	 return false;	
}


