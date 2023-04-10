#include "main.h"

/**
 * is_palindrome - checks if
 * @s: the string
 *
 * Return: returns 1 if true and 0 otherwise
 */

char rev(*s)
{
	if (*s)
	{
		return (rev(s + 1));
	}
}


int is_palindrome(char *s)
{
	if (*s == rev(*s))
	{
		return (1);
	}
	return (0);
}
