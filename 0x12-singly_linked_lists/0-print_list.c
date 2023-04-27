#include "lists.h"
#include <stdio.h>

/**
 * print_list - command that prints a linked list
 * @h: it indicates pointer to the head of the list
 * Return: the numbers of elements in a list
 */
size_t print_list(const list_t *h)
{
	if (!(h != NULL))
		return (0);
	if (!(h->str != NULL))
		printf("[0] (nil)\n");
	else
		printf("[%u] %s\n", h->len, h->str);
	return (1 + print_list(h->next));
}
