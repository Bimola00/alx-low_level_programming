#include "main.h"
/**
 * _strstr - finds the first occurence of the substring
 *
 * @haystack: character of the  pointer
 * @needle: character pointer
 * Return: Always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *j = needle;

	for (; *i != '\0'; j++)
	{
		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
