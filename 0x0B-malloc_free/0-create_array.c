#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creats an array of chars and initializs it with specific char
 * @size: size of array
 * @c: input char
 *
 * Return: NULL if size = 0, pointer to array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;

	}
	ptr[i] = '\0';

	return (ptr);
}
