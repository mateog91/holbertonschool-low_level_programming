#include "holberton.h"

/**
 * print_diagonal - dwas a diagonal line on the terminal
 * @n: interger for number of lines the diagonal must be
 *
 * Description: Draws a diagonal on the terminal based on
 * the n number of lines of the input
 */
void print_diagonal(int n)
{
	int i = 1, j;

	while (i <= n)
	{
		j = 0;
		while (j < i - 1)
		{
			_putchar(' ');
			j++;
		}
		/* print backslash*/
		_putchar(92);
		_putchar('\n');
		i++;
	}
	if (n <= 0)
		_putchar('\n');
}
