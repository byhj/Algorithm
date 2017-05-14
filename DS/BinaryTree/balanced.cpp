
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

int height(class *root)
{
	if (root == NULL) return 0;
	else return max(height(root->left), height(root->right)) + 1;
}

bool isBalanced(Node *root)
{
	if (root == NULL) return true;
	return abs(height(root->left)-height(root->right)) <= 1 
	       && isBalanced(root->left)
	       && isBalanced(root->right);
}
