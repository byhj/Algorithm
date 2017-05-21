/*

MergeSort(headRef)
1) If head is NULL or there is only one element in the Linked List 
    then return.
2) Else divide the linked list into two halves.  
      FrontBackSplit(head, &a, &b); // a and b are two halves
3) Sort the two halves a and b.
      MergeSort(a);
      MergeSort(b);
4) Merge the sorted a and b (using SortedMerge() discussed here) 
   and update the head pointer using headRef.
     *headRef = SortedMerge(a, b);
     
*/

#include <iostream>

struct Node {
	int data;
	Node *next;
};

Node* merge(Node *a, Node *b)
{
	Node *ans = NULL;
	if (a == NULL) return b;
	else if (b == NULL) return a;
	
	if (a->data <= b->data) {
		ans = a;
		ans->next = merge(a->next, b);
	}else {
		ans = b;
		ans->next = merge(a, b->next);
	}
	return ans;
}
/* Split the nodes of the given list into front and back halves,
     and return the two lists using the reference parameters.
     If the length is odd, the extra node should go in the front list.
     Uses the fast/slow pointer strategy.  
*/
void split(Node *src, Node *front, Node *back);

void mergeSortList(Node *head)
{
	if ()
}
