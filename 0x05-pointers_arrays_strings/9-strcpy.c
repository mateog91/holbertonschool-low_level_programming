#include "holberton.h"

/**
 * _strcpy - copies string at src to buffer pointed to by dest
 * @dest: address to string desteny
 * @src: address to string source
 *
 * Return: dest value to this pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (1)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
		{
			break;
		}

		i++;
	}

	return (dest);

}
