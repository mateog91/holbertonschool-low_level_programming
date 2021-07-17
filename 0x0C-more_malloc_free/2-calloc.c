#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: number of elements of certain @size
 * @size: number of bytes per element
 *
 * Description:
 * Reserves space memory for @nmem elements of @size
 * Sets memory reservation to zero
 *
 * Return:
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size = nmemb * size, i;
	char *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = (char *)malloc(total_size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total_size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
