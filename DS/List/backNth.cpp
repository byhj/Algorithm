#include "node.h"

// method 1 use length
// 1) Calculate the length of Linked List. Let the length be len.
// 2) Print the (len – n + 1)th node from the begining of the Linked List.

int backNth(Node *head, int n)
{
	 int len = 0;
	 //get len of list
     Node *cur = head;
     while (cur != NULL) {
     	++len;
     	cur = cur->next;
	 }
	 cur = head;
	 for (int i = 1; i < len-n+1; ++i)
	 	cur = cur->next;
	 }	
	 return cur->data;
} 

/*
Method 2 (Use two pointers) 
Maintain two pointers – reference pointer and main pointer.
 Initialize both reference and main pointers to head. 
 First move reference pointer to n nodes from head. 
 Now move both pointers one by one until reference pointer reaches end. 
 Now main pointer will point to nth node from the end. Return main pointer.
*/

int backNth(Node *head, int n)
{
	if (head == NULL) return -1;
	
	Node *slow = head;
	Node *fast = head;
	while (n-- > 0 && fast != NULL)  {
		fast = fast->next;
	}
	while (fast != NULL) {
		slow = slow->next;
		fast = fast->next;
	}
	return slow->data;
} 

