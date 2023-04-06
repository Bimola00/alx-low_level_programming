#include "main.h"
/**
 * _sqrt_recursion - return natural square root of an int
 * @n: int to be calculated square root
 *
 * Return: the result of square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (check_sqrt(n, 0));
}

/**
 * check_sqrt - verifies the natural square root of a int
 * @k: integer
 * @l: integer
 * Return: natural square root of -1
 */

int check_sqrt(int k, int l)
{
	if (k * k > l)
		return (-1);
	if (k * k == l)
		return (k);
	return (check_sqrt(k, l + 1));
}
