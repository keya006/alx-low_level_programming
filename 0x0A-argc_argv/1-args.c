#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 * @argc: param
 * @argv: the string
 *
 * Return: 0 signifies success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += 1;
	}
	printf("%d\n", sum);
	return (0);
}
