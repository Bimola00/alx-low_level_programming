#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: raised integer
 * @y: power of the x
 * Return: power of x - y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
