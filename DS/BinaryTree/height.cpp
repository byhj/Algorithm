
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

int maxHeight(class *root)
{
	if (root == NULL) return 0;
	else return max(maxHeight(root->left), maxHeight(root->right)) + 1;
}
