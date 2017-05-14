/*
size(tree)
1. If tree is empty then return 0
2. Else
     (a) Get the size of left subtree recursively  i.e., call 
          size( tree->left-subtree)
     (a) Get the size of right subtree recursively  i.e., call 
          size( tree->right-subtree)
     (c) Calculate size of the tree as following:
            tree_size  =  size(left-subtree) + size(right-
                               subtree) + 1
     (d) Return tree_size
     
*/
class Node {
public:
   Node(int x) {
           data = x;
           left = NULL;
           right = NULL;
   }
    int data;
    Node *left;
    Node *right;
};

bool pathSum(Node *root, int sum)
{
	if (root == NULL) return false;
	if (root->left == NULL && root->right == NULL) return root->data == sum;
	return pathSum(root->left, sum-root->data) || pathSum(root->right, sum-root->data); 
}
