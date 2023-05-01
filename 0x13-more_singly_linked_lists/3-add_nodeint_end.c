#include "lists.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that add node to the end of a list
 * @head: pointer to address of the first element
 * @n: integer to add to the new node
 * Return: address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *intNode, *temp;

	/* new node */
	intNode = malloc(sizeof(listint_t));
	if (!(intNode != NULL))
		return (NULL);

	/* fill the node with some elements */
	intNode->n = n;
	intNode->next = NULL;

	/* if the list is empty */
	if (!(*head != NULL))
		*head = intNode;
	else
	{
		/* walk through the list */
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		/* make last element point to the new node */
		temp->next = intNode;
	}

	return (intNode);
}
