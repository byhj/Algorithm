/*
The lower bound for Comparison based sorting algorithm (Merge Sort, Heap Sort, Quick-Sort .. etc) is Ω(nLogn), i.e., they cannot do better than nLogn.

Counting sort is a linear time sorting algorithm that sort in O(n+k) time when elements are in range from 1 to k.
The Radix Sort Algorithm
1) Do following for each digit i where i varies from least significant digit to the most significant digit.
………….a) Sort input array using counting sort (or any stable sort) according to the i’th digit.

Example:
Original, unsorted list:

170, 45, 75, 90, 802, 24, 2, 66
Sorting by least significant digit (1s place) gives: [*Notice that we keep 802 before 2, because 802 occurred before 2 in the original list, and similarly for pairs 170 & 90 and 45 & 75.]

170, 90, 802, 2, 24, 45, 75, 66
Sorting by next digit (10s place) gives: [*Notice that 802 again comes before 2 as 802 comes before 2 in the previous list.]

802, 2, 24, 45, 66, 170, 75, 90
Sorting by most significant digit (100s place) gives:

2, 24, 45, 66, 75, 90, 170, 802
What is the running time of Radix Sort?
Let there be d digits in input integers. Radix Sort takes O(d*(n+b)) time where b is the base for representing numbers, for example, for decimal system, b is 10. What is the value of d? If k is the maximum possible value, then d would be O(logb(k)). So overall time complexity is O((n+b) * logb(k)). Which looks more than the time complexity of comparison based sorting algorithms for a large k. Let us first limit k. Let k <= nc where c is a constant. In that case, the complexity becomes O(nLogb(n)). But it still doesn’t beat comparison based sorting algorithms.
What if we make value of b larger?. What should be the value of b to make the time complexity linear? If we set b as n, we get the time complexity as O(n). In other words, we can sort an array of integers with range from 1 to nc if the numbers are represented in base n (or every digit takes log2(n) bits).
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
void countSort(vector<int> &vec, int exp)
{
    int n = vec.size();
    vector<int> ret(n);
    vector<int> cnt(10);

    //count of occurrences 
    for (int i = 0; i < n; ++i) {
        ++cnt[ (vec[i]/exp) % 10 ];
    }
    for (int i = 1; i < 10; ++i) {
        cnt[i] += cnt[i-1];
    }
    for (int i = n-1; i >= 0; --i) {
        ret[ cnt[(vec[i]/exp) % 10] - 1] = vec[i];
        --cnt[ (vec[i]/exp) % 10];
    }
    vec = ret;
}

void radixSort(vector<int> &vec)
{
    int maxValue = *max_element(vec.begin(), vec.end());
     //Do counting sort for every digit
     for (int exp = 1; maxValue / exp > 0; exp *= 10) {
         countSort(vec, exp);
     }
}

int main()
{
	vector<int> vec = {170, 45, 75, 90, 802, 24, 2, 66};
    radixSort(vec);
    for (auto val : vec) {
    	cout << val << " ";
	}
    return 0;
 } 
