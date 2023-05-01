#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - function that free list and set head - null
 * @head: pointer to the first element in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(head != NULL))
		return;

	while (!(*head == NULL))
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}
