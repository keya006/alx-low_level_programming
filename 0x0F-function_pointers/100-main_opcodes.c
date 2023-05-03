#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: void
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int k, nbits;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbits = atoi(argv[1]);

	if (nbits < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (k = 0; k < nbits; k++)
	{
		printf("%02x", opc[k] & 0xFF);
		if (k != nbits - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
