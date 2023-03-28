#include "main.h"
/**
 * _strlen - lenght of string
 * @s: the string parameter
 *
 * Return: void
 */

int _strlen(char *s)
{
	int i;
	int counter = 0;

	for (i = 0; s[i] != 0; i++)
	{
		counter++;
	}
	return (counter);
}
