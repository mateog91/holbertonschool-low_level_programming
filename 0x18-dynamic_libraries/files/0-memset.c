#include "holberton.h"

/**
 * _memset - Fills @n bytes of memory with @b value
 * @s: Pointer to memory address that wants to be filled.
 * @b: The value to fill the memory with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
