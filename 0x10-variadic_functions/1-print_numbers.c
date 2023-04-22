#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: what to be printed between nos
 * @n: the number of nums to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int nos;

	va_list ptr;

	va_start( ptr, n);

	for (i = 0; i < n; i++)
	{
		nos = va_arg(ptr, int);
		printf("%d", nos);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
