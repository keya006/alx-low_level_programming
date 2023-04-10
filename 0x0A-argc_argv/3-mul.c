#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry of program
 * @argc: the total number of variables
 * @argv: the arguments
 *
 * Return: 0 successs
 */

int main(int argc, char *argv[])
{
	int i;
	int prod = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			prod *= atoi(argv[i]);
		}
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
