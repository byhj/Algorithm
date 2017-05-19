/*
Find the two repeating elements in a given array
You are given an array of n+2 elements. All elements of the array are in range 
1 to n. And all elements occur once except two numbers which occur twice. 
Find the two repeating numbers.

For example, array = {4, 2, 4, 5, 2, 3, 1} and n = 5

The above array has n + 2 = 7 elements with all elements occurring once except 
2 and 4 which occur twice. So the output should be 4 2.

Method 1 (Basic)
Use two loops. In the outer loop, pick elements one by one and count the number
 of occurrences of the picked element in the inner loop.
 
Time Complexity: O(n*n)
Auxiliary Space: O(1)

Method 2 (Use Count array)
Traverse the array once. While traversing, keep track of count of all elements 
in the array using a temp array count[] of size n, when you see an element whose 
count is already set, print it as duplicate.

Time Complexity: O(n)
Auxiliary Space: O(n)


Method 3 (Make two equations)
Let the numbers which are being repeated are X and Y. We make two equations for 
X and Y and the simple task left is to solve the two equations.
We know the sum of integers from 1 to n is n(n+1)/2 and product is n!. 
We calculate the sum of input array, when this sum is subtracted from n(n+1)/2,
 we get X + Y because X and Y are the two numbers missing from set [1..n]. 
 Similarly calculate product of input array, when this product is divided from 
 n!, we get X*Y. Given sum and product of X and Y, we can find easily out X and Y.

Let summation of all numbers in array be S and product be P

X + Y = S – n(n+1)/2
XY = P/n!

Time Complexity: O(n)
Auxiliary Space: O(1)
*/

/*
Method 4 (Use XOR)
Thanks to neophyte for suggesting this method.
The approach used here is similar to method 2 of this post.
Let the repeating numbers be X and Y, if we xor all the elements in the array 
and all integers from 1 to n, then the result is X xor Y.
The 1’s in binary representation of X xor Y is corresponding to the different 
bits between X and Y. Suppose that the kth bit of X xor Y is 1, we can xor all 
the elements in the array and all integers from 1 to n, whose kth bits are 1. 
The result will be one of X and Y.
*/




