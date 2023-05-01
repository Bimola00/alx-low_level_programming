#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_listint - function that print a linked list
 *@h: head of linked list
 *Return: the numbers of elements
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *intNode = h;
	int element = 0;

	while (!(intNode == NULL))
	{
		printf("%d\n", intNode->n);
		element++;
		intNode = intNode->next;
	}
	return (element);
}
