/*
getLeafCount(node)
1) If node is NULL then return 0.
2) Else If left and right child nodes are NULL return 1.
3) Else recursively calculate leaf count of the tree using below formula.
    Leaf count of a tree = Leaf count of left subtree + 
                                 Leaf count of right subtree
								 
*/


class Node {
public:
	int data;
	Node *left;
	Node *right;
};

int countLeaf(Node *root)
{
	if (root == NULL) return 0;
	if (root->left == NULL && root->right == NULL) return 1;
	return countLeaf(root->left) + countLeaf(root->right);
}
