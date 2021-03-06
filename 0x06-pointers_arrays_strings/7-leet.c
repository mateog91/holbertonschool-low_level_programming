#include "holberton.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: Input string.
 *
 * Description:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * Return: Pointer to input string.
 */

char *leet(char *s)
{
	char numbers[] = "4433007711";
	char letters[] = "aAeEoOtTlL";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
		}

	}
	return (s);
}
