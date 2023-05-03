#include "3-calc.h"

/**
 * op_add - sums two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: sum of 2 nums
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates difference of 2 nums
 * @a: the first number
 * @b: the second number
 *
 * Return: substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: product of two nums
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds division of two nums
 * @a: the first number
 * @b: the second number
 *
 * Return: result of division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the modulus of the two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: division operation remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
