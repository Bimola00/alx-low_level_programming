#include "main.h"
/**
 * _print_rev_recursion - string to be printed in reverse
 * @p: string pointer
 * _putchar - prints out the character
 *  Return: 0;
 */

void _print_rev_recursion(char *p)
{
	if (*p)
	{
		_print_rev_recursion(p + 1);
		_putchar(*p);
	}
}
