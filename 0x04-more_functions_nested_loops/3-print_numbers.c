#include "holberton.h"

/**
 * print_number - prints numbers 0 through 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int first = 48, last = 57, current;

	for (current = first; current <= last; current++)
	{
		_putchar(current);
	}
	_putchar('\n');
	return();
}
