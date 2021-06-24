#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print the line
 *
 * Description: Draws a straight line in the terminal
 * printing the character '_' n number of times.
 *
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
