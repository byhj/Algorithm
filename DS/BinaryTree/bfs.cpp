/*
Is there any difference in terms of Time Complexity?
All four traversals require O(n) time as they visit every node exactly once.

Is there any difference in terms of Extra Space?
There is difference in terms of extra space required.

Extra Space required for Level Order Traversal is O(w) where w is maximum width of Binary Tree. In level order traversal, queue one by one stores nodes of different level.
Extra Space required for Depth First Traversals is O(h) where h is maximum height of Binary Tree. In Depth First Traversals, stack (or function call stack) stores all ancestors of a node.
Maximum Width of a Binary Tree at depth (or height) h can be 2h where h starts from 0. So the maximum number of nodes can be at the last level. And worst case occurs when Binary Tree is a perfect Binary Tree with numbers of nodes like 1, 3, 7, 15, ¡­etc. In worst case, value of 2h is Ceil(n/2).

Height for a Balanced Binary Tree is O(Log n). Worst case occurs for skewed tree and worst case height becomes O(n).

So in worst case extra space required is O(n) for both. But worst cases occur for different types of trees.

*/

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

void levelOrder(Node *node)
{
	if (node == NULL) return;
     queue<Node*> nodeQue;
     nodeQue.push(node);
     while (!nodeQue.empty()) {
     	Node *node = nodeQue.front();
     	nodeQue.pop();
     	cout << node->data << " ";
     	if (node->left != NULL) nodeQue.push(node->left);
     	if (node->right != NULL) nodeQue.push(node->right);
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

    
    return 0;
} 
