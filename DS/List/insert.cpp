/*
In this post, methods to insert a new node in linked list are discussed. A node can be added in three ways
1) At the front of the linked list
2) After a given node.
3) At the end of the linked list.

*/ 

struct Node {
public:
	int data;
	Node *next;
};

//insert a new node on the front of the list
void push(Node *head, int data)
{
	Node *node = new Node(data);
	node->next = head;
	head = node; 
}

//insert a new node after a node
void insertAfter(Node *preNode, int data)
{
	Node *node = preNode->next;
	preNode->next = new Node(data);
	preNode->next->next = node;
}

//append a new node after last node
void append(Node *head, int data)
{
	if (head == NULL) head = new Node(data);
	else {
		while (head->next != NULL){
			head = head->next;
		}
		head->next = new Node(data);
	} 
}


