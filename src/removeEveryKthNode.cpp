/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
#include<malloc.h>
struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	int remcount = 0;
	int index = 1;
	int temp = K;


	struct node *curr;

	curr = (struct node *)malloc(sizeof(struct node));
	curr = head;

	if (head == NULL)
		return NULL;
	
	if (K < 0)
		return NULL;

	if (K == 1 || K == 0)
		return NULL;


	while (curr != NULL){

		if (index == temp-1 && curr->next != NULL){
			curr->next = curr->next->next;
			remcount++;
			temp = temp + K - 1;
			
		}
		index++;
		curr = curr->next;
	}

	return head;
}