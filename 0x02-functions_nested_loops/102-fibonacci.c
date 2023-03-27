#include <stdio.h>
/**
 * main - Entry of function
 *
 * Return: o denotes success
 */
int main(void)
{
	int i = 1;
	int j = 1;
	int k = 1;
	int result;

	while (k < 50)
	{
		printf("%d, ", j);
		result = i + j;
		i = j;
		j = result;
		k++;
	}
	printf("%d\n", j);
	return (0);
}
