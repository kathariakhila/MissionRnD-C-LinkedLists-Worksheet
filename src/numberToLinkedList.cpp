/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int num;
	struct node *next;
};

struct node * numberToLinkedList(int N) {
	
	struct node *ptr;
	struct node *head = NULL;
	int digit;
	struct node *newNode;

	


	if (N < 0)
		N = -N;

	if (N == 0){
		newNode = (struct node *)malloc(sizeof(struct node));
		newNode->num = 0;
		newNode->next = NULL;
		head = newNode;
	}
	
	while (N != 0){

		newNode = (struct node *)malloc(sizeof(struct node));

		digit = N % 10;
		N = N / 10;
		newNode->num = digit;
		newNode->next = head;
		head = newNode;
	}
	
	return head;

}