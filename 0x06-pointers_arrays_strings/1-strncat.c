#include "holberton.h"

int length(char *string);

/**
 * _strncat - appends the src string to dest
 * @dest: address to string desteny
 * @src: address to string source
 * @n: input interger of n chars to copy from src to dest
 *
 * Descritption:
 * Appends the first n chars of src string to the dest string, overwriting the
 * null byte (\0) at the end of dest, and then adds a terminating null byte.
 *
 * Return:A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	/* Variable Declaration */
	int i = 0;
	int len_dest;

	/* find len of dest */
	len_dest = length(dest);

	/* pass chars of src to dest  */
	while (1)
	{
		/* finished passing n, append null and break */
		if (i >= n)
		{
			dest[len_dest + i] = '\0';
			break;
		}

		/* find null char of src and stop*/
		if (src[i] == '\0')
		{
			break;
		}

		/* pass char of src to dest*/
		dest[len_dest + i] = src[i];

		/* increase i */
		i++;
	}

	return (dest);

}
/**
 * length - finds length of a string
 * @string: Input string
 *
 * Description:
 * Goes through chars of input strings, counts
 * and returns an interger with its length.
 *
 * Return: Interger with length of string
 */
int length(char *string)
{
	int i;

	for (i = 0; string[i]; i++)
	{
	}
	return (i);
}
