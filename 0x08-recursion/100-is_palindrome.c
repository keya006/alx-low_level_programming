#include "main.h"

/**
 * strlen_recursion - finds length of string
 * @s: the string
 *
 * Return: the length
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + strlen_recursion(s + 1));
	}
}

/**
 * compare - compares characters in a string
 * @s: the string
 * @n1: the index of first character
 * @n2: index of last char
 *
 * Return: nothing
 */

int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
		{
			return (1);
		}
		else
		{
			return (0 + compare(s, n1 + 1, n2 - 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if function is
 * @s: the string
 *
 * Return: 1 if and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (compare(s, 0, strlen_recursion(s) - 1));
	}
}
