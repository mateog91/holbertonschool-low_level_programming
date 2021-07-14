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

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		*(ptr + i) = (int *) malloc(sizeof(int) * width);

		if (*(ptr + i) == NULL)
		{
			for (; i >= 0; i--)
			{
				free(*(ptr + i));
				*(ptr + i) = NULL;
			}
			free(ptr);
			ptr = NULL;
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
