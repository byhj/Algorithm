#include "node.h"

int count(Node *head, int x)
{
	int cnt = 0;
	while (head != NULL) {
		if (head->data == x) ++cnt;
		head = head->next;
	}
	return cnt;
} 
