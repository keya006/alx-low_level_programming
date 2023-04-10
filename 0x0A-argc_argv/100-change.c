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
	int c;
	int d;
	int e;
	int f;

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
				c = b % 25;
				d = c % 10;
				e = d % 5;
				f = e % 2;
				a = (b / 25) + (c / 10) + (d / 5) + (e / 2) + (f / 1);
				printf("%d\n", a);
			}
		}
	}
	return (0);
}
