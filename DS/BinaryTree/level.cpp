
#include <iostream>
#include <queue>

using namespace std;
 
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

//Time Complexity: O(n) where n is number of nodes in the binary tree 
void levelOrder(Node *node)
{
     if (node == NULL) return;
     queue<Node*> nodeQue;
     nodeQue.push(node);
     
     while (!nodeQue.empty()) { 
        int size = nodeQue.size();
        while (size > 0) {
        	Node *node = nodeQue.front();
        	nodeQue.pop();
        	cout << node->data << " ";
     	    if (node->left  != NULL) nodeQue.push(node->left);
        	if (node->right != NULL) nodeQue.push(node->right);
        	--size; 
		 } 
		 cout << endl;
	 }
}

int height(Node *root)
{
	if (root == NULL) return 0;
	else return max(height(root->left), height(root->right)) + 1;
}

void printLevel(Node *root, int level)
{
	if (root == NULL) return;
	if (level == 1) cout << root->data << " ";
	if (level > 1) {
		printLevel(root->left, level-1);
		printLevel(root->right, level-1);
	}
}
void recurLevelOrder(Node *root)
{
	int h = height(root);
	for (int i = 1; i <= h; ++i) {
		printLevel(root, i);
	}
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    levelOrder(root);
    recurLevelOrder(root);
    
    return 0;
} 
