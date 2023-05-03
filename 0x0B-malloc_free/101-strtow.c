#include <stdlib.h>
#include "main.h"

/**
 * count_words - count the number of words in a string
 * @t: string to evaluate
 *
 * Return: number of words
 */
int count_words(char *t)
{
	int f, c, r;

	f = 0;
	r = 0;

	for (c = 0; t[c] != '\0'; c++)
	{
		if (t[c] == ' ')
			f = 0;
		else if (f == 0)
		{
			f = 1;
			r++;
		}
	}

	return (r);
}
/**
 * **strtow - splits the  string into words
 * @str: string to be split
 *
 * Return: pointer to an array of strings if Success
 * or NULL on fail
 */
char **strtow(char *str)
{
	char **matrix, *tp;
	int i, k = 0, l = 0, words, c = 0, start, end;

	while (*(str + l))
		l++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tp = (char *) malloc(sizeof(char) * (c + 1));
				if (tp == NULL)
					return (NULL);
				while (start < end)
					*tp++ = str[start++];
				*tp = '\0';
				matrix[k] = tp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
