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

struct node * sortLinkedList(struct node *head) {
	if (head == NULL) return NULL;
	struct node *n1 = NULL, *n2 = NULL, *temp = NULL, *temp1 = NULL;
	int i, j, c = 0;
	temp = head;
	while (temp != NULL)
	{
		c++;
		temp = temp->next;
	}
//	n1 = head;
	//n2 = head->next;
	for (i = 0; i < c; i++)
	{
		n1 = head;
		n2 = head->next;
		for (j = 0; j < c - i - 1; j++)
		{
			if (n2->num < n1->num)
			{
				if (j == 0)
				{
					n1->next = n2->next;
					n2->next = n1;
					head = n2;
				}
				else
				{
					temp1->next = n2;
					n1->next = n2->next;
					n2->next = n1;
				}
				temp1 = n2;
				n2 = n1->next;
			}
			else
			{
				temp1 = n1;
				n1 = n2;
				n2 = n2->next;
			}
		}
	}
	return head;
}