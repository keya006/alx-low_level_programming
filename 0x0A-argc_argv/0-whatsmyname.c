#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of program
 * @argc: total number of variables
 * @argv: the string variables
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
		{
			printf("%s\n", argv[0]);
		}
	}
	return (0);
}
