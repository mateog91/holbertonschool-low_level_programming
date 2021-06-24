#include "holberton.h"

/**
 * print_most_numbers - prints numbers 0 through 9 without 2, 4
 */

void print_most_numbers(void)
{
	int first = '0', last = '9', current = first;

	while (current <= last)
	{
		if (current == ('2') || current == ('4'))
		{
			/* Do not print */
		}
		else
			_putchar(current);
		current++;
	}
	_putchar('\n');
}
