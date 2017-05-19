/*

Given a Binary Tree, write a function to check whether the given Binary Tree is Complete Binary Tree or not.

A complete binary tree is a binary tree in which every level, except possibly the last, is completely filled, and all nodes are as far left as possible. See following examples.

The following trees are examples of Complete Binary Trees
    1
  /   \
 2     3
  
       1
    /    \
   2       3
  /
 4

       1
    /    \
   2      3
  /  \    /
 4    5  6
 
The method 2 of level order traversal post can be easily modified to check whether 
a tree is Complete or not. To understand the approach, let us first define a term ��Full Node��.
A node is ��Full Node�� if both left and right children are not empty (or not NULL).
The approach is to do a level order traversal starting from root. In the traversal, 
once a node is found which is NOT a Full Node, all the following nodes must be leaf nodes.
Also, one more thing needs to be checked to handle the below case: If a node has 
empty left child, then the right child must be empty.
 
*/

 bool isCompleteTB(Node *root){
 	if (root == NULL) return true;
 	
 	queue<Node*> nodeQue;
 	nodeQue.push(root);
	 bool isSeeNonFull = false;
 	while (nodeQue.empty()) {
 		root = nodeQue.front();
 		nodeQue.pop();
 		
		 if (root->left != NULL) {
 		    if (isSeeNonFull) return false;
			 nodeQue.push(root->left);	
	    }else {
	    	isSeeNonFull = true;
		}
		 if (root->right != NULL) {
 		    if (isSeeNonFull) return false;
			 nodeQue.push(root->right);	
	    }else {
	    	isSeeNonFull = true;
		}	
	 }
	 return true;
 }
