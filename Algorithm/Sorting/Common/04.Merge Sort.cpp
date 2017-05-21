/*
Merge Sort
MergeSort(arr[], l,  r)
If r > l
     1. Find the middle point to divide the array into two halves:
             middle m = (l+r)/2
     2. Call mergeSort for first half:
             Call mergeSort(arr, l, m)
     3. Call mergeSort for second half:
             Call mergeSort(arr, m+1, r)
     4. Merge the two halves sorted in step 2 and 3:
             Call merge(arr, l, m, r)

Time Complexity: Sorting arrays on different machines. Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.
T(n) = 2T(n/2) + \Theta(n)
 The above recurrence can be solved either using Recurrence Tree method or Master method. It falls in case II of Master Method and solution of the recurrence is \Theta(nLogn).
Time complexity of Merge Sort is \Theta(nLogn) in all 3 cases (worst, average and best) as merge sort always divides the array in two halves and take linear time to merge two halves.
Auxiliary Space: O(n)
Algorithmic Paradigm: Divide and Conquer
Sorting In Place: No in a typical implementation
Stable: Yes
 */


#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &vec, int left, int mid, int right)
{
   vector<int> vt = vec;
   int i = left;
   int j = mid+1;
   for (int k = left; k <= right; ++k) {
       if (i > mid)            vec[k] = vt[j++]; //all is R[]
       else if (j > right)     vec[k] = vt[i++]; //all is L[]
       else if (vt[i] < vt[j]) vec[k] = vt[i++]; //take L[] and R[] sorted
       else                    vec[k] = vt[j++];
   }
}

void mergeSort(vector<int> &vec, int left, int right)
{
    if (left < right) {
       int mid = left + (right - left) / 2;
       mergeSort(vec, left, mid);
       mergeSort(vec, mid+1, right);
       merge(vec, left, mid, right);
    }
}

int main()
{
	vector<int> vec = {12, 11, 13, 5, 6, 7};
    mergeSort(vec, 0, vec.size()-1);
    for (auto val : vec) {
    	cout << val << " "; 
	}
	return 0;
}
