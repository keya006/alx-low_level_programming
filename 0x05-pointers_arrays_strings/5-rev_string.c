#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string param
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != 0; i++)
	{
		count++;
	}

	for (i = count; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
