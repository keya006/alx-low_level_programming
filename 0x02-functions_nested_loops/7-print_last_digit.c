#include "main.h"
/**
 * print_last_digit - print last digit of no
 * Return: value of last digit
 */

int print_last_digit(int a)
{
	int c;

	c = a % 10;
	_putchar(c);
	return (c);
}
