#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - returns a pointer to a 2 dimensional array of integers
 * @grid: the 2d grid
 * @height: theheight dimension of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
