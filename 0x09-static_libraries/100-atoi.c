#include "main.h"

/**
 * _atoi - a fxn that converts a string to an integer
 * @s: the input string
 * Return: an integer
 */
int _atoi(char *s)
{
	unsigned int cot = 0, siz = 0, oi = 0, pn = 1, m = 1, k;

	while (*(s + cot) != '\0')
	{
		if (siz > 0 && (*(s + cot) < '0' || *(s + cot) > '9'))
			break;
		if (*(s + cot) == '-')
			pn *= -1;

		if ((*(s + cot) >= '0') && (*(s + cot) <= '9'))
		{
			if (siz > 0)
				m *= 10;
			siz++;
		}
		cot++;
	}

	for (k = cot - siz; i < cot; k++)
	{
		oi = oi + ((*(s + k) - 48) * m);
		m /= 10;
	}
	return (oi * pn);
}
