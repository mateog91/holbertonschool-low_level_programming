#include "holberton.h"

/**
 * _memcpy - Copies @n bytes of memory from @src to @dest
 * @dest: Pointer to memory address that wants to be filled.
 * @src: The value to fill the memory with.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to the memory filled.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
