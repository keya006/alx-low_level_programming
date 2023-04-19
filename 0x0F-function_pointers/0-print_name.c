#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string to be printed
 * @f: pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
