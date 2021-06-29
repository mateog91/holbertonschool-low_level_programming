#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: an interger with the length of the input string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
