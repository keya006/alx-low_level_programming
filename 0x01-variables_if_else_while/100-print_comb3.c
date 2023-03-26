#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int x = 48;
	int y = 48;

	while (x < 58)
	{
		while (y < 58)
		{
			putchar(x);
			putchar(y);
			if (x < 57)
			{
				if (y < 57)
				{
					putchar(44);
					putchar(32);
				}
				else
				{
				}
			}
			else
			{
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
