#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - function that get the num of elements in linked list
 * @h: head of the linked list
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *intNode = h;
	int elements = 0;

	while (!(intNode == NULL))
	{
		elements++;
		intNode = intNode->next;
	}
	return (elements);
}
