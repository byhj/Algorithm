/*
Two elements whose sum is closest to zero
Question: An Array of integers is given, both +ve and -ve. 
You need to find the two elements such that their sum is closest to zero.


METHOD 1 (Simple) 
For each element, find the sum of it with every other element in the 
array and compare sums. Finally, return the minimum sum.


METHOD 2 (Use Sorting) 
Thanks to baskin for suggesting this approach. We recommend to read this post for background of this approach.

Algorithm 
1) Sort all the elements of the input array.
2) Use two index variables l and r to traverse from left and right ends respectively. Initialize l as 0 and r as n-1.
3) sum = a[l] + a[r]
4) If sum is -ve, then l++
5) If sum is +ve, then r¨C
6) Keep track of abs min sum.
7) Repeat steps 3, 4, 5 and 6 while l < r Implementation

Time Complexity: complexity to sort + complexity of finding the optimum pair = O(nlogn) + O(n) = O(nlogn)
*/
