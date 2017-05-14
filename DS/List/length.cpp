/*
 
Iterative Solution

1) Initialize count as 0 
2) Initialize a node pointer, current = head.
3) Do following while current is not NULL
     a) current = current -> next
     b) count++;
4) Return count 

*/

struct Node {
	int data;
	Node *next;
};

int length(Node *head)
{
	int len = 0;
	Node *move = head;
	while (move != NULL) {
		++len;
		move = move->next;
	}
	return len;
}

/*
Recursive Solution

int getCount(head)
1) If head is NULL, return 0.
2) Else return 1 + getCount(head->next) 

*/

int getLen(Node *head)
{
	if (head == NULL) return 0;
	return getLen(head->next) + 1;
}
