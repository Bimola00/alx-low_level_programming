#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that calculate the sum all the data in linked list
 * @head: pointer to the head of the list
 * Return: the sum of data, 0 otherwise
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!(head != NULL))
		return (0);

	while (!(head == NULL))
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

