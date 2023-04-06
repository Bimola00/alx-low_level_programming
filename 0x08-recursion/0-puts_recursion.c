#include "main.h"
/**
 * _puts_recursion - prints a recursive function
 * @r: string
 *
 * Return: success(0)
 */

void _puts_recursion(char *r)
{
	if (*r)
	{
		_putchar(*r);
		_puts_recursion(r + 1);
	}
	else
		_putchar('\n');
}
