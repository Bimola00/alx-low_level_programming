#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*free_list - function that free linked list
*@head: pointer to the head of the linked list
*/
void free_list(list_t *head)
{
	list_t *node;

	while (!(head == NULL))
	{
		
		node = head;
		
		head = head->next;
		/* free the former  node */
		free(node->str);
		free(node);
	}
}
