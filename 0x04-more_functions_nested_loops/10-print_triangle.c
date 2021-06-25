#include "holberton.h"

/**
 * print_triangle - prints triangle in terminal
 * @size: determines the size of the triangle
 *
 * Description:
 * Prints triangle in terminal with size "size"
 * using character "#"
 */

void print_triangle(int size)
{
	int row, col;

	for (row = 1; row <= size; row++)
	{
		for (col = 1; col <= size; col++)
		{
			if (col <= (size - row))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
