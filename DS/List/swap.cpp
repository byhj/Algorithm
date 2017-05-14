
/*
This may look a simple problem, but is interesting question as it has following cases to be handled.
1) x and y may or may not be adjacent.
2) Either x or y may be a head node.
3) Either x or y may be last node.
4) x and/or y may not be present in linked list.

*/
#include "node.h"

void swapNode(Node *head, int x, int y)
{
	if (x == y) return;
	
	//search for x
	Node *preX = NULL, *curX = NULL;
	while (curX != NULL && curX->data != x) {
		preX = curX;
		curX = curX->next;
	}
	//search for y
	Node *preY = NULL, *curY = NULL;
	while (curY != NULL && curY->data != y) {
		preY = curY;
		curY = curY->next;
	}
    //x or y is not in list
    if (curX == NULL || curY == NULL) return;
	
	//if head node
	if (preX == NULL) head = curY;
	else preX->next = curY;
	
	 	//if head node
	if (preY == NULL) head = curX;
	else preY->next = curX;
	
	swap(curY->next, curX->next);
}
