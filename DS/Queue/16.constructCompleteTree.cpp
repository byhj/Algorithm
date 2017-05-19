/*

Construct Complete Binary Tree from its Linked List Representation
Given Linked List Representation of Complete Binary Tree, construct the Binary tree. 
A complete binary tree can be represented in an array in the following approach.

If root node is stored at index i, its left, and right children are stored at indices 2*i+1, 2*i+2 respectively.

1. Create an empty queue.
2. Make the first node of the list as root, and enqueue it to the queue.
3. Until we reach the end of the list, do the following.
¡­¡­¡­a. Dequeue one node from the queue. This is the current parent.
¡­¡­¡­b. Traverse two nodes in the list, add them as children of the current parent.
¡­¡­¡­c. Enqueue the two nodes into the queue.

*/ 

struct ListNode {
	int data;
	ListNode *next;
};

struct TreeNode {
	TreeNode(int x) {
		data = x;
	}
	int data;
	TreeNode *left;
	TreeNode *right;
};

void listToTree(ListNode *head, TreeNode *root)
{
	 queue<TreeNode*> treeQue;
	 if (head == NULL) {
	 	root = NULL;
	 	return;
	 } 
	 
     root = new TreeNode(head->data);
     treeQue.push(root);
     head = head->next;
     
     while (head != NULL) {
     	TreeNode *parent = treeQue.front();
     	treeQue.pop();
     	
     	TreeNode *left = new TreeNode(head->data);
     	treeQue.push(left);
	    head = head->next;
     	if (head != NULL) {
		   TreeNode *right = new TreeNode(head->data);
		   treeQue.push(right);
	 	   head = head->next; 
	   }
	    parent->left = left;
	    parent->right = right;
}
