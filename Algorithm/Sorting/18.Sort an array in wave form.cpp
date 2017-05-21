/*
Given an unsorted array of integers, sort the array into a wave like array. 
An array ‘arr[0..n-1]’ is sorted in wave form if arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= …..

*/

//A Simple Solution is to use sorting. First sort the input array, then swap all adjacent elements.
//Time : nlogn
void sortInWave(vector<int> &vec)
{
    sort(vec.begin(), vec.end());
    // Swap adjacent elements
    for (int i=0; i<n-1; i += 2)
        swap(arr[i], arr[i+1]);
}

/*
This can be done in O(n) time by doing a single traversal of given array. The idea is based on the fact that if we make sure that all even positioned (at index 0, 2, 4, ..) elements are greater than their adjacent odd elements, we don’t need to worry about odd positioned element. Following are simple steps.
1) Traverse all even positioned elements of input array, and do following.
….a) If current element is smaller than previous odd element, swap previous and current.
….b) If current element is smaller than next odd element, swap next and current.

Below are implementations of above simple algorithm.

*/

// This function sorts arr[0..n-1] in wave form, i.e., arr[0] >= 
// arr[1] <= arr[2] >= arr[3] <= arr[4] >= arr[5] ....
void sortInWave(vector<int> &arr)
{
    // Traverse all even elements
    for (int i = 0; i < n; i+=2)
    {
        // If current even element is smaller than previous
        if (i>0 && arr[i-1] > arr[i] )
            swap(arr[i], arr[i-1]);
 
        // If current even element is smaller than next
        if (i<n-1 && arr[i] < arr[i+1] )
            swap(arr[i], arr[i + 1]);
    }
}
