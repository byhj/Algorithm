/*
Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.
Always pick first element as pivot.
Always pick last element as pivot (implemented below)
Pick a random element as pivot.
Pick median as pivot.

Worst O(n2)
1) Array is already sorted in same order.
2) Array is already sorted in reverse order.
3) All elements are same (special case of case 1 and 2)

Time taken by QuickSort in general can be written as following.
 T(n) = T(k) + T(n-k-1) + \theta(n)
The first two terms are for two recursive calls, the last term is for the partition process. k is the number of elements which are smaller than pivot.
The time taken by QuickSort depends upon the input array and partition strategy. Following are three cases.
Worst Case: The worst case occurs when the partition process always picks greatest or smallest element as pivot. If we consider above partition strategy where last element is always picked as pivot, the worst case would occur when the array is already sorted in increasing or decreasing order. Following is recurrence for worst case.
 T(n) = T(0) + T(n-1) + \theta(n)
which is equivalent to  
 T(n) = T(n-1) + \theta(n)
The solution of above recurrence is \theta(n2).
Best Case: The best case occurs when the partition process always picks the middle element as pivot. Following is recurrence for best case.
 T(n) = 2T(n/2) + \theta(n)
The solution of above recurrence is \theta(nLogn). It can be solved using case 2 of Master Theorem.
Average Case:
To do average case analysis, we need to consider all possible permutation of array and calculate time taken by every permutation which doesn't look easy.
We can get an idea of average case by considering the case when partition puts O(n/9) elements in one set and O(9n/10) elements in other set. Following is recurrence for this case.
 T(n) = T(n/9) + T(9n/10) + \theta(n)
Solution of above recurrence is also O(nLogn)
Although the worst case time complexity of QuickSort is O(n2) which is more than many other sorting algorithms like Merge Sort and Heap Sort, QuickSort is faster in practice, because its inner loop can be efficiently implemented on most architectures, and in most real-world data. QuickSort can be implemented in different ways by changing the choice of pivot, so that the worst case rarely occurs for a given type of data. However, merge sort is generally considered better when data is huge and stored in external storage.
*/

#include <iostream>
#include <vector>

using namespace std;
 
int partition(vector<int> &vec, int low, int high)
{
    //pick the last elements as pivot
    int pivot = vec[high];
    //i is index which < pivot index
    int i = low-1;
    for (int j = low; j < high; ++j) {
        if (vec[j] <= pivot) {
            swap(vec[++i], vec[j]);
        }
    }
    swap(vec[i+1], vec[high]);
    return i+1;
}

void quickSort(vector<int> &vec, int low, int high)
{
    if (low < high) {
        int pi = partition(vec, low, high);
        quickSort(vec, low, pi-1);
        quickSort(vec, pi+1, high);
    }
}

int main()
{
	vector<int> vec = {10, 7, 8, 9, 1, 5};
    quickSort(vec, 0, vec.size()-1);
    for (auto val : vec) {
    	cout << val << " "; 
	}
	return 0;
}
