#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of
 * integers.
 * @width: width of array
 * @height: height of array
 *
 * Return:
 * NULL on failure
 * Double Pointer to 2D array on success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	/* Check if inputs are 0 or negatives */
	if (width <= 0 || height <= 0)
		return (NULL);

	/*Allocting for double pointer w holds addresses of each row*/
	ptr = (int **) malloc(sizeof(int *) * width);
	if (ptr == NULL)
		return (NULL);
	/*
	 *  Allocating for the actual array
	 * for each row (i) it allocates @height number of slots of memory
	 * and store the address in the ptr + i location of double pointer
	 */
	for (i = 0; i < width; i++)
	{
		*(ptr + i) = (int *) malloc(sizeof(int *) * height);
		if (*(ptr + i) == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
