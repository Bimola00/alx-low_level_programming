#include "lists.h"

/**
 * list_len - return length of a linked list
 * @h: indicates the pointer to the head of the list
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	if (!(h != NULL))
		return (0);
	return (1 + list_len(h->next));
}
