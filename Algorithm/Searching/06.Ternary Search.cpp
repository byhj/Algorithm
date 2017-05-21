/*

T(n) = T(n/3) + 4, T(1) = 1
In binary search, there are 2Log2n + 1 comparisons in worst case. In ternary search, there are 4Log3n + 1 comparisons in worst case.
Time Complexity for Ternary search = 4clog3n + O(1)
 (2 / Log23) * Log2n
*/

int ternarySearch(int arr[], int low, int high, int x)
{
   while (low < high) {
        int mid1 = low + (high - low) / 3;
        int mid2 = mid1 + (high - low) / 3;

        if (arr[mid1] == x) return mid1;
        if (arr[mid2] == x) return mid2;
        if (arr[mid1] >  x) return ternarySearch(arr, 1, mid1-1, x);
        if (arr[mid2] <  x) return ternarySearch(arr, mid2+1, high, x);
        return ternarySearch(arr, mid1+1, mid2-1, x);
   }
   return -1;
}
