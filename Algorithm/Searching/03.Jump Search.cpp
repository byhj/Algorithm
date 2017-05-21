/*
Like Binary Search, Jump Search is a searching algorithm for sorted arrays. 
The basic idea is to check fewer elements (than linear search) 
by jumping ahead by fixed steps or skipping some elements in place of searching all elements.

For example, suppose we have an array arr[] of size n and block (to be jumped) size m. 
Then we search at the indexes arr[0], arr[m], arr[2m]¡­..arr[km] and so on. Once we find the interval (arr[km] < x < arr[(k+1)m]),
we perform a linear search operation from the index km to find the element x.

In the worst case, we have to do n/m jumps and if the last checked value is greater than the element to be searched for, we perform m-1 comparisons more for linear search. Therefore the total number of comparisons in the worst case will be ((n/m) + m-1). The value of the function ((n/m) + m-1) will be minimum when m = ¡Ìn. Therefore, the best step size is m = ¡Ìn.

Works only sorted arrays.
The optimal size of a block to be jumped is O(¡Ì n). This makes the time complexity of Jump Search O(¡Ì n).
The time complexity of Jump Search is between Linear Search ( ( O(n) ) and Binary Search ( O (Log n) ).
Binary Search is better than Jump Search, but Jump search has an advantage that we traverse back only once 
(Binary Search may require up to O(Log n) jumps, consider a situation where the element to be search is 
the smallest element or smaller than the smallest). So in a systems where jumping back is costly, we use Jump Search.

Time Complexity : O(¡Ìn)
Auxiliary Space : O(1)

*/
#include <iostream>
#include <cmath>

using namespace std;

//C-C++
int jumpSearch(int arr[], int n, int x)
{
   int step = floor(sqrt(n));
   int cur = step;
   int prev = 0;
   
   //find the section 
   while (arr[min(cur, n)-1] < x) {
   	    prev = cur;
        cur += step; 
        if (prev >= n)
           return -1;
   }
    //Doing a linear search for x in block 
   while (arr[prev] < x) {
       if (++prev == min(step, n))
            return -1;
   }
   if (arr[prev] == x)
       return prev;
   
   return -1;   
}

int  main()
  {
        int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,
                     34, 55, 89, 144, 233, 377, 610};
        int x = 55;
 
        // Find the index of 'x' using Jump Search
        int index = jumpSearch(arr, 16, x);
        cout << index << endl;

}
