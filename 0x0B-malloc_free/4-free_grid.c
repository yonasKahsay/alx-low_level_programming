#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees the memory hold by the grid.
 * @grid : the grid size
 * @height: the height for an array.
 *
 * Return: it returns noting
 */
void free_grid(int **grid, int height)
		{
		int i = 0;

		if (grid == NULL || height == 0)
			return;
		for (i = 0 ; i <= height ; i++)
		{
			free(grid[i]);
		}
		free(grid);
		return;
		}
