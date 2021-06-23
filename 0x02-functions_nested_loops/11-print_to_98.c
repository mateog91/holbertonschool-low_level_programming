#include <stdio>
#include "holberton.h"

/**
 * print_to_98 - Prints natural number from n to 98
 * @n: Interger
 *
 * Description:
 * Prints all natural numbers from n to 98, followed by a new line.
 * Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * Allowed to use the standard library
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
}
