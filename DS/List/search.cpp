/*
2) Initialize a node pointer, current = head.
3) Do following while current is not NULL
    a) current->key is equal to the key being searched return true.
    b) current = current->next
4) Return false 

*/

struct Node {
	Node *next;
	int data;
}; 

bool searchNode(Node *head, int x)
{
	Node *move = head;
	while (move != NULL) {
		if (move->data == x) 
		   return true;
		move = move->next;
	}
	return false;
}
