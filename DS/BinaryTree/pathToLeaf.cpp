
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

void pathToLeaf(Node *root, vector<int> path)
{
	if (root == NULL) return;
	paht.push_back(root->data);
	//leaf, print the path
	if (root->left == NULL && root->right == NULL) return;
	
	pathToLeaf(root->left,  path);
	pathToLeaf(root->right, path);
} 

/* Driver program to test mirror() */
int main()
{
  Node *root = new Node(1);
  root->left        = new Node(2);
  root->right       = new Node(3);
  root->left->left  = new Node(4);
  root->left->right = new Node(5); 
 
  /* Print all root-to-leaf paths of the input tree */
  pathToLeaf(root);
 
  return 0;
}
