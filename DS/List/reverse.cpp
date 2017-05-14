#include "node.h"

void reverseList(Node *head)
{
	Node *prev = NULL;
	Node *next = NULL;
	Node *move = head;
	while (move != NULL) {
        next = move->next;
		move->next = prev;
		prev = move;
		move = next;
	}
	head = prev;
} 

/*
Recursive Method:

   1) Divide the list in two parts - first node and rest of the linked list.
   2) Call reverse for the rest of the linked list.
   3) Link rest to first.
   4) Fix head pointer
   
*/
