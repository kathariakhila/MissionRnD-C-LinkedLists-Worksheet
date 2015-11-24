/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};

void sll_012_sort(struct node *head){
	
	int count0 = 0;
	int count1 = 0;
	int count2 = 0;
	int len = 0;
	int index;

	struct node *curr;

	curr = (struct node *)malloc(sizeof(struct node));
	curr = head;

	while (curr != NULL){
		
		if (curr->data == 0)
			count0++;
		else if (curr->data == 1)
			count1++;
		else
			count2++;
		len++;

		curr->data = 0;
		curr = curr->next;
	}

	curr = head;

	for (index = 0; index < count0; index++)
		curr = curr->next;

	//curr = curr->next;

	for (index = 0; index < count1; index++){
		curr->data = 1;
		curr = curr->next;
	}


	//curr = curr->next;
	for (index = 0; index < count2; index++){
		curr->data = 2;
		if (curr->next == NULL)
			break;
		else
			curr = curr->next;
	}

}