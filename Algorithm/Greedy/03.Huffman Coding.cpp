/*
Huffman coding is a lossless data compression algorithm. The idea is to assign variable-legth codes to input characters, lengths of the assigned codes are based on the frequencies of corresponding characters. The most frequent character gets the smallest code and the least frequent character gets the largest code.
The variable-length codes assigned to input characters are Prefix Codes, means the codes (bit sequences) are assigned in such a way that the code assigned to one character is not prefix of code assigned to any other character. This is how Huffman Coding makes sure that there is no ambiguity when decoding the generated bit stream.
Let us understand prefix codes with a counter example. Let there be four characters a, b, c and d, and their corresponding variable length codes be 00, 01, 0 and 1. This coding leads to ambiguity because code assigned to c is prefix of codes assigned to a and b. If the compressed bit stream is 0001, the de-compressed output may be “cccd” or “ccb” or “acd” or “ab”.

See this for applications of Huffman Coding.

There are mainly two major parts in Huffman Coding
1) Build a Huffman Tree from input characters.
2) Traverse the Huffman Tree and assign codes to characters.

Steps to build Huffman Tree
Input is array of unique characters along with their frequency of occurrences and output is Huffman Tree.

1. Create a leaf node for each unique character and build a min heap of all leaf nodes (Min Heap is used as a priority queue. The value of frequency field is used to compare two nodes in min heap. Initially, the least frequent character is at root)

2. Extract two nodes with the minimum frequency from the min heap.

3. Create a new internal node with frequency equal to the sum of the two nodes frequencies. Make the first extracted node as its left child and the other extracted node as its right child. Add this node to the min heap.

4. Repeat steps#2 and #3 until the heap contains only one node. The remaining node is the root node and the tree is complete.

Time complexity: O(nlogn) where n is the number of unique characters. If there are n nodes, extractMin() is called 2*(n – 1) times. extractMin() takes O(logn) time as it calles minHeapify(). So, overall complexity is O(nlogn).
*/

#include <priority_queue>

struct Node {
	Node(char ch, int f) {
		data = ch;
		freq = f;
	}
	char data;
	int  freq;
	Node *left, *right;
	bool operator < (const Node &node) {
		return this->freq < node.freq;
	}
};

void huffmanTree(vector<Node> nodeVec)
{
	priority_queue<Node, vector<Node>,  std::greater<int> > nodeQue(nodeVec.begin(), nodeVec.end());
    
    while (nodeQue.size() != 1) {
    	Node *left = &nodeQue.top();
    	nodeQue.pop();
    	Node *right= &nodeQue.top();
    	nodeQue.pop();
    	Node *node = new Node('$', left.freq + right.freq);
    	node->left = left;
    	node->right = right;
    	nodeQue.push(*node);
	}	
	Node *root = &nodeQue.top();
	if (root->left) {
		
	}
}

