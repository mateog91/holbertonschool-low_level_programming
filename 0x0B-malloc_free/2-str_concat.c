#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: Input string 1.
 * @s2: Input string 2.
 *
 * Description:
 * The returned pointer should point to a newly allocated space in
 * memory which contains the contents of s1, followed by the contents
 * of s2, and null terminated.
 * If passed NULL treat as empty string.
 *
 * Return:
 * NULL on failure.
 * On succes, pointer to new allocated string.
 */
char *str_concat(char *s1, char *s2)
{
	int size, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Recorrer s1 y s2 y calcular tamaño total */
	for (i = 0; s1[i]; i++)
	{
	}
	size = i;

	for (i = 0; s2[i]; i++)
	{
	}
	size = size + i + 1;

	/* Allocate memory for new string */
	ptr = malloc(sizeof(char) * size);
		if (ptr == NULL)
			return (NULL);

	/* Recorrer s1 y pegar en ptr */
	j = 0;
	for (i = 0; s1[i]; i++)
	{
		ptr[i] = s1[i];
	}

	/* Recorrer s2 y pegar desde final de s1 en ptr hasta final de s2*/
	for (j = 0; s2[j]; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
