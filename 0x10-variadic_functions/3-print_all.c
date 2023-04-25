#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: types of arguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ptr;

	unsigned int i = 0, j, k = 0;
	char *str;
	const char r_arg[] = "cifs";

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (r_arg[j])
		{
			if (format[i] == r_arg[j] && k)
			{
				printf(", ");
				break;
			}j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ptr, int)), k = 1;
				break;
			case 'i':
				printf("%d", va_arg(ptr, int)), k = 1;
				break;
			case 'f':
				printf("%f", va_arg(ptr, double)), k = 1;
				break;
			case 's':
				str = va_arg(ptr, char *), k = 1;
				if (!str)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}i++;
	}
	printf("\n");
	va_end(ptr);
}
