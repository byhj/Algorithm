/*
Unlike C++ and Java, C doesn’t support generics. How to create a linked list in C that can be used for any data type? In C, we can use void pointer and function pointer to implement the same functionality. The great thing about void pointer is it can be used to point to any data type. Also, size of all types of pointers is always is same, so we can always allocate a linked list node. Function pointer is needed process actual content stored at address pointed by void pointer.

Following is a sample C code to demonstrate working of generic linked list.

// C program for generic linked list
#include<stdio.h>
#include<stdlib.h>
 
/* A linked list node */
struct node
{
    // Any data type can be stored in this node
    void  *data;
 
    struct node *next;
};

