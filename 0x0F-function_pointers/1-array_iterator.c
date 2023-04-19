#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array
 * @array: a list of integers
 * @size: the array size
 * @action:a pointer to the function that you will use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array && action)
	{
		for (j = 0; j < size; j++)
		{
			action(array[j]);
		}
	}
}
