
struct Node {
	int data;
	Node *next;
}; 


Node *getTail(Node *cur)
{
	while (cur != NULL && cur_>next != NULL) {
		cur = cur->next;
	}
	return cur;
}

Node *partition(Node *head, Node *end, Node *newHead, Node *newEnd)
{
	Node *pivot = end;
	Node *prev  = NULL, *cur = head, *tail = pivot;
	
	while (cur != pivot) {
		if (cur->data < pivot->data) {
		  
		}else {
			
		}
	}
}
