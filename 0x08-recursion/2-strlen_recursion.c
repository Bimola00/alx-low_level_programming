#include "main.h"
/**
 * _strlen_recursion - returns lenght of a string
 * @c: string character
 * Return: string length
 */
int _strlen_recursion(char *c)
{
	int j = 0;

	if (*c)
	{
		j++;
		j += _strlen_recursion(c + 1);
	}

	return (j);
}
