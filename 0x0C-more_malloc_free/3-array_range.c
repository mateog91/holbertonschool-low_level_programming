#include <stdlib.h>
/**
 * array_range - creats an array of intergers
 * @min: minumum value of array of intergers
 * @max: maximum value of array of intergers
 *
 * Return:
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i, size = max - min;

	if (min > max)
		return (NULL);

	ptr = (int *)malloc(size + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		ptr[i] = i + min;

	return (ptr);
}
