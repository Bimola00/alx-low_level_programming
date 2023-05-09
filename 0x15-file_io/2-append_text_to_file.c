#include "main.h"
#include <stdio.h>

/**
 * _strlen - get the length of the string
 * @s: the string
 * Return: the length
 */
int _strlen(char *s)
{
	int lenth = 0;

	while (!(*s == '\0'))
	{
		lenth++;
		s++;
	}

	return (lenth);
}
/**
 * append_text_to_file -  func that appends text at the end of a file
 * @filename: pointer to name of the file we want to create
 * @text_content: pointer to the NULL terminated string to write to the file
 * Return: 1 if success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!(fd != -1))
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	w_count = write(fd, text_content, _strlen(text_content));
	if (!(w_count != -1))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
