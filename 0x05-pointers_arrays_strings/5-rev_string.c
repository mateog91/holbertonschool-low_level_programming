#include "holberton.h"

/**
 * rev_string - prints a string in reverse followed by new line
 * @s: input string
 *
 */
void rev_string(char *s)
{

	int i, length;
	char c;

	/* length of s */
	for (length = 0; s[length]; length++)
	{
	}
	length--;
	for (i = 0; i <= (length / 2); i++)
	{
		c = s[i];
		s[i] = s[length - i];
		s[length - i] = c;
	}
}
