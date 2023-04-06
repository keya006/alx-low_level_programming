#include "main.h"

/**
 * wildcmp - compares two strings
 * @s1: the 1st string
 * @s2: the 2nd string
 *
 * Return: returns 1 if identical and 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (1);
	}
	return (0);
}
