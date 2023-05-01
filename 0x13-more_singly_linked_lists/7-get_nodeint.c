#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that return the node of index
 * @head: pointer to the head of the linked list
 * @index: num of node that we want in the list
 * Return: the address of node, NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int i;

	
	for (i = 0; (i < index && temp != NULL); i++)
	{
		temp = temp->next;
	}
	
	if (!(temp != NULL))
		return (NULL);
	else
		return (temp);/* return the node */

}
