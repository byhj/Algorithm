/*
Print the elements of an array in the decreasing frequency if 2 numbers have 
same frequency then print the one which came first.

Examples:

Input:  arr[] = {2, 5, 2, 8, 5, 6, 8, 8}
Output: arr[] = {8, 8, 8, 2, 2, 5, 5, 6}

Input: arr[] = {2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8}
Output: arr[] = {8, 8, 8, 2, 2, 5, 5, 6, -1, 9999999}


METHOD 1 (Use Sorting)

  1) Use a sorting algorithm to sort the elements O(nlogn)    
  2) Scan the sorted array and construct a 2D array of element and count O(n).
  3) Sort the 2D array according to count O(nlogn).
  
  
  METHOD 2(Use BST and Sorting)
1. Insert elements in BST one by one and if an element is already present then increment the count of the node. Node of the Binary Search Tree (used in this approach) will be as follows.

struct tree
{
  int element;
  int first_index /*To handle ties in counts
  int count;
}BST;
Run on IDE
2.Store the first indexes and corresponding counts of BST in a 2D array.
3 Sort the 2D array according to counts (and use indexes in case of tie).

Time Complexity: O(nlogn) if a Self Balancing Binary Search Tree is used. This is implemented in Set 2.

METHOD 3(Use Hashing and Sorting)
Using a hashing mechanism, we can store the elements (also first index) and their counts in a hash. Finally, sort the hash elements according to their counts.

*/
 
