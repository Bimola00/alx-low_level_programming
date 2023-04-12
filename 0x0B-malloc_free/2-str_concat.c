#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - two strings
 * @s1:  string one
 * @s2:  string two
 *
 * Return: pointer to newly allocated space in memory, or NULL if error
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, m, n;
	char *dest;


	if (s1 == NULL)
		i = 0;

	else
	{
		for (i = 0; s1[i]; i++)
			;
	}

	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	m = i + j + 1;

	dest = malloc(m * sizeof(char));
	if (dest == NULL)
		return (NULL);

	for (n = 0; n < i; n++)
		dest[n] = s1[n];
	for (n = 0; n < j; n++)
		dest[n + i] = s2[n];
	dest[i + j] = '\0';

	return (dest);
}
