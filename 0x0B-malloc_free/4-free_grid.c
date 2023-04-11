#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * free_grid - frees 2d
  * @grid:  2 dimensional grid
  * @height: height of grid
  *
  * Return: ...
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
