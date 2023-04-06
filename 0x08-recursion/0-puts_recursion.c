#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: the string in question
 *
 * Return: void nothing
 */

void _puts_recursion(char *s)
{
	if (*s[0] == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s[0]);
		_puts_recursion(*s + 1);
	}
	_putchar('\n');
}
