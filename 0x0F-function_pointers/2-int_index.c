#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: the list of numbers
 * @size: number of elents in list
 * @cmp: the function pointer
 *
 * Return: index and -1 as may be necessary
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
