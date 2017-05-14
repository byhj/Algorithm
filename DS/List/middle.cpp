#include "node.h"

int middleNode(Node *head)
{
	Node *slow = head;
	Node *fast = head;
	if (head != NULL) {
	   while (fast != NULL && fast->next != NULL) {
	   	slow = slow->next;
	   	fast = fast->fast->next; 
	   }
	} 
	return slow->data; 
} 

int middle(Node *head)
{
	int cnt = 0;
	Node *mid = head;
	while (head != NULL) {
	   if (cnt  & 1)
	      mid = mid->next;
		++cnt;
		head = head->next;	
	}
	return mid->data;
}
