/*
 
To delete a node from linked list, we need to do following steps.
1) Find previous node of the node to be deleted.
2) Changed next of previous node.
3) Free memory for the node to be deleted.


*/

#include <iostream>

struct Node {
	int data;
	Node *next;
};

void deleteNodeKey(Node *head, int key)
{
	if (head == NULL) return;
	Node *move = head;
	Node *prev = NULL;
	//if delete head node
	if (head->data = key) {
		head = move->next;
		delete move;
		return;
	}
	while (move != NULL && move->data != key){
		prev = move;
		move = move->next;
	}
	//if not in list, return
	if (move == NULL) return;
	
	//delete the key node
	prev->next = move->next;
	delete move;
}

void deleteNodePos(Node *head, int position)
{
	if (head == NULL) return;
	Node *move = head;
	//if delete head node
	if (position == 0) {
		head = move->next;
		delete move;
		return;
	}
	//find the previous node of the node to be deleted
	for (int i = 0; move != NULL && i < position-1; ++i)
		move = move->next;
	}
	//if not in list, return
	if (move == NULL || move->next == NULL) return;
	
	//delete the key node
	Node *next = move->next->next;
	delete move->next;
	move->next = next;
}
