#include "main.h"
		
#include <stdlib.h>
		
/**
		
 * alloc_grid - returns a pointer to a 2 dimensional array of
 * integers
		
 * @width: width input
		
 * @height: height input
		
 * Return: pointer to 2 dim. array of ints
		
 */
		
int **alloc_grid(int width, int height)
		
{
		
	int **m;
		
	int k, y;
		

		
	if (width <= 0 || height <= 0)
		
		return (NULL);
		

		
	m = malloc(sizeof(int *) * height);
		

		
	if (!m)
	{
		return (NULL);
	}

	for (k = 0; k < height; k++)
		
	{
		
		m[k] = malloc(sizeof(int) * width);
		

		
		if (m[k] == NULL)
		
		{
		
			for (; k >= 0; k--)
		
				free(m[k]);
		

		
			free(m);
		
			return (NULL);
		
		}
		
	}
		

		
	for (k = 0; k < height; k++)
		
	{
		
		for (y = 0; y < width; y++)
		
			m[k][y] = 0;
		
	}
		

		
	return (m);
		
}

