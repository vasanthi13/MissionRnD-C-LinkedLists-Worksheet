/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>

struct node {
	int num;
	struct node *next;
};

struct node * removeEveryKthNode(struct node *head, int K) {
	if(head==NULL)
		return NULL;
	if (K <= 1)
		return NULL;
	else
	{
		struct node *temp = NULL;
		struct node *temp1 = NULL;
		int c = 0;
		temp = head;
		while (temp != NULL)
		{
			c++;
			if (c == K)
			{
				temp1->next = temp->next;
				c = 0;
				temp = temp1->next;
			}
			else
			{
				temp1 = temp;
				temp = temp->next;
			}
		}
	}
	return head;
}