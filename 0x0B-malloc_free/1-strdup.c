#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory, 
 *	which contains a copy of the string given as a parameter.
 * @str: pointer to input string to be copied.
 *
 * Description:
 * The _strdup() function returns a pointer to a new string which is a
 * duplicate of the string str. Memory for the new string is obtained with
 * malloc, and can be freed with free.
 *
 * Return: NULL if 1) str == NULL 2) Insufficient memory was available
 * 	   On success returns pointer to new duplicate of input string.
 */

char *_strdup(char *str)
{
	int i, size;
	char *ptr;
	
	/* Check if input string is NULL */
	if (str == NULL)
		return (NULL);

	/* Find size of input string */
	for (size = 0; str[size] != '\0'; size++)
	{
	}

	/* Allocate memory for new string */
	ptr = malloc(sizeof(*str) * size);
	if (ptr == NULL)
		return (NULL);
	
	/* Copy input string to new string */
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	
	return (ptr);

}
