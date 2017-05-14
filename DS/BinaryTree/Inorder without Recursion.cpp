/*
1) Create an empty stack S.
2) Initialize current node as root
3) Push the current node to S and set current = current->left until current is NULL
4) If current is NULL and stack is not empty then 
     a) Pop the top item from stack.
     b) Print the popped item, set current = popped_item->right 
     c) Go to step 3.
5) If current is NULL and stack is empty then we are done.

Time Complexity: O(n)

*/ 


#include <iostream>
#include <stack>

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
void inOrder(Node *root)
{
     if (root == NULL) return;
     stack<Node*> nodeSta;

     while (root != NULL || !nodeSta.empty()) {	 
	 //step 1, push left until null 
        while (root != NULL) {
        	nodeSta.push(root);
        	root = root->left;
		}
       	root = nodeSta.top();
       	nodeSta.pop();
       	cout << root->data << " ";
     	root = root->right;
	 }
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    inOrder(root);
    
    return 0;
} 
