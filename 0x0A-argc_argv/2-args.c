#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: total number of variables
 * @argv: the variable
 *
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
