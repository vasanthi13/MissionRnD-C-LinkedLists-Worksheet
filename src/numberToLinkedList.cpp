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
}*first = NULL, *temp = NULL, *newnode = NULL;

struct node * numberToLinkedList(int N) {
	if (N == 0)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode -> num = 0;
		newnode->next = NULL;
		return newnode;
	}
	else
	{
		if (N < 0)  N = N*-1;
		int c = 0, n1 = 0, r;
		while (N != 0)
		{
			r = N % 10;
			n1 = n1 * 10 + r;
			N = N / 10;
			c++;
		}
		newnode = (struct node *)malloc(sizeof(struct node));
		newnode->num = n1 % 10;
		newnode->next = NULL;
		n1 = n1 / 10;
		c--;
		temp = newnode;
		first = newnode;
		while (1)
		{
			if (c == 0) break;
			newnode = (struct node *)malloc(sizeof(struct node));
			newnode->num = n1 % 10;
			newnode->next = NULL;
			n1 = n1 / 10;
			temp->next = newnode;
			temp = newnode;
			c--;
		}
		return first;
	}
}