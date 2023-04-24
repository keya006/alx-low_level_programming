#include "main.h"

/**
 * prime_check - checks if a number is prime
 * @n: the number to be checked
 * @k: an iterator
 *
 * Return: 1 if and 0 if not prime
 */

int prime_check(unsigned int n, unsigned int k)
{
	if (n % k == 0)
	{
		if (n == k)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + prime_check(n, k + 1));
}

/**
 * is_prime_number - detects if a number is prime
 * @n: the number
 *
 * Return: i if and 0 if not
 */

int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (prime_check(n, 2));
}
