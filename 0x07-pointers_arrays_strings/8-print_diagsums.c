#include<stdio.h>

/**
 * print_diagsums - print sum of diagonals of a squared matrix
 * @a: Pointer to a 2D squared matrix of type interger.
 * @size: Size of the matrix.
 *
 */

void print_diagsums(int *a, int size)
{
	int row, column, diagonal_sum1 = 0, diagonal_sum2 = 0;

	/* Go throgh matix diagonal from top left to bottom right */
	for (row = 0; row < size; row++)
	{
		for (column = 0; column < size; column++)
		{
			diagonal_sum1 = diagonal_sum1 + a[row][column];
		}
	}
	/* Go through matrix diagonal from bottom left to top right */

	for (row = size - 1; row >= 0; row--)
	{
		for (column = 0; column < size; column++)
		{
			diagonal_sum2 = diagonal_sum2 + a[row][column];
		}
	}

	/* Print diagonal sums */
	pritf("%i, %i\n", diagonal_sum1, diagonal_sum2);
}
