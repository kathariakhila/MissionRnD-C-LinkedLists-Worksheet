/*
OVERVIEW: Given an unsorted single linked list, sort the linked list without using extra array or linked list.
E.g.: 4->2->1->5->3, output is 1->2->3->4->5.

INPUTS: An unsorted single linked list.

OUTPUT: Sort the linked list.

ERROR CASES: Return NULL for error cases.

NOTES: Without using extra array or linked list.
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};


void swap(struct node *n1, struct node *n2){
	int temp = n1->num;
	n1->num = n2->num;
	n2->num = temp;
}


struct node * sortLinkedList(struct node *head) {


	struct node *ptr = head;
	struct node *curr = head;
		
		
	if (ptr == NULL)
		return NULL;

	while (curr){

		ptr = head;

		while (ptr->next != NULL){
			if (ptr->num > ptr->next->num)
				swap(ptr, ptr->next);
					
			ptr = ptr->next;
		}
			
		curr = curr->next;
	} 
	
	return head;
}