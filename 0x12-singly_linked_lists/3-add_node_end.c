#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
*add_node_end - function that add node to the end of the list
*@head: pointer to head of the list
*@str: str we want to add to the list
*Return: address of the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *temp;

	/* create new node of size list_t */
	newNode = malloc(sizeof(list_t));
	if (!(newNode != NULL))
		return (NULL);
	/* fill node with elements */
	newNode->str = strdup(str);
	newNode->len = strlen(str);
	newNode->next = NULL;

	temp = *head;
	if (!(*head != NULL))
		*head = newNode;
	else
	{

		while (!(temp->next == NULL))
		{
			temp = temp->next;
		}

	   temp->next = newNode;
	}
	return (newNode);
}
