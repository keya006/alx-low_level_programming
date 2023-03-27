#include "main.h"

/**
 * _isupper - function that checks for upper
 * case character
 * @c: the parameter
 *
 * Return: Returns 1 if c is uppercase and 0
 * if c is not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
