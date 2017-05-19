/*

We have an array arr[0 . . . n-1]. We should be able to efficiently find the minimum value from index qs (query start) to qe (query end) where 0 <= qs <= qe <= n-1.

A simple solution is to run a loop from qs to qe and find minimum element in given range. This solution takes O(n) time in worst case.

Another solution is to create a 2D array where an entry [i, j] stores the minimum value in range arr[i..j]. Minimum of a given range can now be calculated in O(1) time, but preprocessing takes O(n^2) time. Also, this approach needs O(n^2) extra space which may become huge for large input arrays.

Segment tree can be used to do preprocessing and query in moderate time. With segment tree, preprocessing time is O(n) and time to for range minimum query is O(Logn). The extra space required is O(n) to store the segment tree.

Representation of Segment trees
1. Leaf Nodes are the elements of the input array.
2. Each internal node represents minimum of all leaves under it.

An array representation of tree is used to represent Segment Trees. For each node at index i, the left child is at index 2*i+1, right child at 2*i+2 and the parent is at segmenttree2.



Construction of Segment Tree from given array
We start with a segment arr[0 . . . n-1]. and every time we divide the current segment into two halves(if it has not yet become a segment of length 1), and then call the same procedure on both halves, and for each such segment, we store the minimum value in a segment tree node.
All levels of the constructed segment tree will be completely filled except the last level. Also, the tree will be a Full Binary Tree because we always divide segments in two halves at every level. Since the constructed tree is always full binary tree with n leaves, there will be n-1 internal nodes. So total number of nodes will be 2*n – 1.
Height of the segment tree will be segmenttree3. Since the tree is represented using array and relation between parent and child indexes must be maintained, size of memory allocated for segment tree will be segmenttree.

Query for minimum value of given range
Once the tree is constructed, how to do range minimum query using the constructed segment tree. Following is algorithm to get the minimum.

// qs --> query start index, qe --> query end index
int RMQ(node, qs, qe) 
{
   if range of node is within qs and qe
        return value in node
   else if range of node is completely outside qs and qe
        return INFINITE
   else
    return min( RMQ(node's left child, qs, qe), RMQ(node's right child, qs, qe) )
}

*/

#include <cmath>
#include <vector>

using namespace std;

// A recursive function that constructs Segment Tree for array[low..high].
// cur is index of current node in segment tree st
void initSTUtil(vector<int> &vec, vector<int> &st, int low, int high, int cur)
{
	//only one element in array, store it
	if (low == high) {
		st[cur] = vec[low];
	}	
	int mid = low + (high-low)/2;
	st[cur] = min(initSTUtil(vec, st, low, mid, cur*2+1)
	              initSTUtil(vec, st, mid+1, high, cur*2+2) );
}

void initST(vector<int> &vec, vector<int> &st, int n)
{
    //Height of segment tree
    int x = (int)(ceil(log2(n))); 
	 // Maximum size of segment tree
    int maxSize = 2*(int)pow(2, x) - 1; 
    st.resize(maxSize);
    constructSTUtil(vec, st, 0, n-1, 0);
}

int remUtil(vector<int> &st, int beg, )
{
	
}

int rmq(vector<int> &st, int beg, int end)
{
	//invalid input
    if (beg < 0 || end > st.size()-1 || beg > end) {
    	return -1;
	}	
	return remUtil(st, 0, st.size()-1, beg, end, 0);
}
