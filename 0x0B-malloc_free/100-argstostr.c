#include "main.h"
#include <stdlib.h>

/**
 * argstostr - funx that concatenates
 * all the arguments of a program
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: the pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aut;
	int c, k, j, m;

	if (ac == 0)
		return (NULL);

	for (c = k = 0; k < ac; k++)
	{
		if (av[k] == NULL)
			return (NULL);

		for (j = 0; av[k][j] != '\0'; j++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aut == NULL)
	{
		free(aut);
		return (NULL);
	}

	for (k = j = m = 0; m < c; j++, m++)
	{
		if (av[k][j] == '\0')
		{
			aut[m] = '\n';
			k++;
			m++;
			j = 0;
		}
		if (m < c - 1)
			aut[m] = av[k][j];
	}
	aut[m] = '\0';

	return (aut);
}
