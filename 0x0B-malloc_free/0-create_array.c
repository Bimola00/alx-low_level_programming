#include "main.h"
#include <stdlib.h>

/**
 * create_array - an array of chars, and
 * initializes it with a specific char
 * @size: size of the array
 * @c: for character
 * Return: A pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (!size)
		return (NULL);
	s = (char *)malloc(size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;
	return (s);
}
