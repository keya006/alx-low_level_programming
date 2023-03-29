#include "main.h"

/**
 * _islower - checks whether character is lowercase
 * @c: the character to be checked
 *
 * Return: i if character is lower and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
