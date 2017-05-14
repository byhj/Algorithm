#include "node.h"

int getNth(Node *head, int index)
{
     Node *cur = head;
	 while (cur != NULL) {
	 	if (--index == 0) return cur->data;
	 	cur = cur->next;
	 }	
	 //error, not index node
	 assert(0);
} 
