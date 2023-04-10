#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: total number of arguments
 * @argv: the arguments entered
 *
 * Return: o succecss
 */

int main(int argc, char *argv[])
{
	int i;
	int b;
	int a;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) < 0)
			{
				printf("%d\n", 0);
			}
			else
			{
				b = atoi(argv[i]);
				a = (b / 25) + ((b % 25) / 10) + (((b % 25) % 10) / 5) + ((((b % 25) % 10) % 5) / 2) + (((((b % 25) % 10) % 5) % 2) / 1);
			printf("%d\n", a);
			}
		}
	}
return (0);
}
