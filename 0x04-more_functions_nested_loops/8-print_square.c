#include "holberton.h"

/**
 * print_square - prints square in the terminal followed by new line
 * @size: The size of the square wanted to be drawn
 *
 * Description:
 * Prints a square in terminal with the character "#"
 * The size of the squere is determined by the interger input "size"
 */
void print_square(int size)
{
	int row, column;

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
