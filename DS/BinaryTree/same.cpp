
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

bool isSame(Node *lhs, Node *rhs)
{
	if (lhs == NULL && rhs == NULL) {
	    return true;	
	}
	if (lhs != NULL && rhs != NULL) {
	      return lhs->data == rhs->data && isSame(lhs->left, rhs->left)
		         && isSame(lhs->right, rhs->right); 
 	}
	return false; 
