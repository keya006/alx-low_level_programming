#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always zero (success)
 */
int main(void)
{
	char c = 'a';
	char d = 'z';

	while (c <= d)
	{
		if (c == 'q')
		{
			continue;
		}
		else if (c == 'e')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
