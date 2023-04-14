#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: s1
 * @s2: s2 second
 * @n: size of s2
 *
 * Return: null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	unsigned int int i;
	unsigned int int j;
	unsigned int k = 0;
	unsigned int t = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[k] != '\0')
	{
		k++;
	}
	while (s2[t] != '\0')
	{
		t++;
	}
	if (n >= t)
	{
		n = t;
	}
	ptr = malloc(sizeof(char) * (n + k + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < k; i++)
		ptr[i] = s1[i];

	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';
	return (ptr);
}
