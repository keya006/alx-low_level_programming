#include "3-calc.h"

/**
 * get_op_func - funx that selects the correct function to perform
 * the operation asked by the user
 * @s: the char operator.
 *
 * Return: a pointer to the function that corresponds to the
 * operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k = 0;

	while (k < 10)
	{
		if (s[0] == ops->op[k])
			break;
		k++;
	}

	return (ops[k / 2].f);
}
