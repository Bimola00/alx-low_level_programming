#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - function that free a linked list
 * @head: pointer to head of the linked list
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (!(head == NULL))
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
