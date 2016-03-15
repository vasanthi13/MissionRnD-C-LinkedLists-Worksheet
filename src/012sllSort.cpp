
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
	struct node *n1 = NULL, *n2 = NULL, *temp = NULL, *temp1 = NULL;
	int i, j, c = 0;
	temp = head;
	while (temp != NULL)
	{
		c++;
		temp = temp->next;
	}
	
	for (i = 0; i < c; i++)
	{
		temp = head;
		for (j = 0; j < c - i - 1; j++)
		{
			if (temp->data>temp->next->data)
			{
				int t = temp->data;
				temp->data = temp->next->data;
				temp->next->data = t;
			}
			temp = temp->next;
		}
	}
}