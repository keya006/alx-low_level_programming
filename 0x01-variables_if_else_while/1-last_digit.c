#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always zero (success)
 */
int main(void)
{
	int n;
	int ra;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	ra = n % 10;

	if (ra > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ra);
	}
	else if (ra == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ra);
	}
	else if (ra < 6 && ra != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ra);
	}
	return (0);
}
