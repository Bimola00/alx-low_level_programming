#include "function_pointers.h"

/**
 * array_iterator - apply function on element of an array
 * @array: given array
 * @size: size array
 * @action: function to apply on items in array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
