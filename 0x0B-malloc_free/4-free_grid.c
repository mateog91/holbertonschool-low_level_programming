#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - unction that frees a 2 dimensional grid
 * @grid: double pointer to grid
 * @height: height of the grid
 *
 * Description:
 * function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(*(grid + i));
		*(grid + i) = NULL;
	}

	free(grid);
	grid = NULL;

}
