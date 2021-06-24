#include "holberton.h"

/**
 * print_numbers - prints numbers 0 through 9
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
	int first = 48, last = 57, current = first;

	while (current <= last)
	{
		_putchar(current);
		current++;
	}
	_putchar('\n');
}
