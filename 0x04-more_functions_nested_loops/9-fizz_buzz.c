#include <stdio.h>
/**
 * main - entry point of code
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i = 1;

	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		i++;
	}
	printf("Buzz");
	printf("\n");
	return (0);
}

