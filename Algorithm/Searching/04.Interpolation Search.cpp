/*
The Interpolation Search is an improvement over Binary Search for instances, where the values in a sorted array are uniformly distributed.
Binary Search always goes to middle element to check. On the other hand interpolation search may go to different locations according
 the value of key being searched. For example if the value of key is closer to the last element,
 interpolation search is likely to start search toward the end side.

 // The idea of formula is to return higher value of pos
 // when element to be searched is closer to arr[hi]. And
 // smaller value when closer to arr[lo]
 pos = lo + [ (x-arr[lo])*(hi-lo) / (arr[hi]-arr[Lo]) ]

 arr[] ==> Array where elements need to be searched
 x     ==> Element to be searched
 lo    ==> Starting index in arr[]
 hi    ==> Ending index in arr[]

 Rest of the Interpolation algorithm is same except the above partition logic.

Step1: In a loop, calculate the value of “pos” using the probe position formula.
Step2: If it is a match, return the index of the item, and exit.
Step3: If the item is less than arr[pos], calculate the probe position of the left sub-array. Otherwise calculate the same in the right sub-array.
Step4: Repeat until a match is found or the sub-array reduces to zero.

Time Complexity : If elements are uniformly distributed, then O (log log n)). 
In worst case it can take upto O(n).
Auxiliary Space : O(1)
*/

int interpolationSearch(int arr[], int n, int x)
{
   int low = 0;
   int high = n - 1;

   // Since array is sorted, an element present
   // in array must be in range defined by corner
   while (low <= high && x >= arr[low] && x <= arr[high]) {
        int pos = low + (double)(high - low) / (arr[high]-arr[low2]) * (x - arr[low]);

        if (arr[pos] == x) return pos;
        if (arr[pos] <  x) low  = pos + 1;
        if (arr[pos] >  x) high = pos - 1;
   }
   return -1;
}
