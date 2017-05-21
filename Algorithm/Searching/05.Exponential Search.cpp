/*
Exponential search involves two steps:

1.Find range where element is present
2.Do Binary Search in above found range.

How to find the range where element may be present?
The idea is to start with subarray size 1 compare its last element with x, then try size 2, then 4 and so on until last element of a subarray is not greater.
Once we find an index i (after repeated doubling of i), we know that the element must be present between i/2 and i (Why i/2? because we could not find a greater value in previous iteration)
T
ime Complexity : O(Log n)
Auxiliary Space : The above implementation of Binary Search is recursive and requires O()Log n) space. With iterative Binary Search, we need only O(1) space.

Applications of Exponential Search:

Exponential Binary Search is particularly useful for unbounded searches, where size of array is infinite. Please refer Unbounded Binary Search for an example.
It works better than Binary Search for bounded arrays also when the element to be searched is closer to the first element.
*/

int binarySearch(int arr[], int low, int high, int x)
{
   while (low < high) {
        int mid = low + (high - low) / 2;
        if (x == arr[mid]) return mid;
        else if (x < arr[mid]) high = mid - 1;
        else low = mid + 1;
   }
   return -1;
}

int exponentialSearch(int arr[], int n, int x)
{
    if(arr[0] == x) return 0;

    //Find range for binary serach by repeated doubing
    int id = 1;
    while (id < n && arr[id] <= x) {
       id *= 2;
    }

    return binarySearch(arr, id/2, min(id, n), x);
}
