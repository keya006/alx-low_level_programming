#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: total number of arguments
 * @argv: the arguments
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
