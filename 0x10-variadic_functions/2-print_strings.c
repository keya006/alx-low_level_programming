#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator: to be printed between strigs
 * @n: number of stings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *string;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ptr, char *);

		if (string)
		{
			printf("%s", string);
		}
		else
		{
			printf("(nil)");
		}
		if (i < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(ptr);
}
