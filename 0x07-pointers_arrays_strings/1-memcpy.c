#include "main.h"

/**
 * _memcpy -command that copies bytes from src to dest
 * to @dest
 * @n: copy the function
 * @dest: to the memory
 * @src: from the memory
 * Return: points to @deest
 */

void *(_memcpy(char *dest, char *src, unsigned int n))
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
