#include<stdio.h>

/**
 * get_element - gets element of the plane "matriz"
 * @a: pointer to array
 * @i: i index
 * @j: j index
 * @size: size of matrix
 *
 * Return: element inside matrix.
 */
int get_element(int *a, int i, int j, int size)
{
	return (*(a + i * size + j));
}

/**
 * print_diagsums - print sum of diagonals of a squared matrix
 * @a: Pointer to a 2D squared matrix of type interger.
 * @size: Size of the matrix.
 *
 */
void print_diagsums(int *a, int size)
{
	int i, diagonal_sum1 = 0, diagonal_sum2 = 0;

	for (i = 0; i < size; i++)
	{
		diagonal_sum1 += get_element(a, i, i, size);
		diagonal_sum2 += get_element(a, i, size - 1 - i, size);
	}
	/* Print diagonal sums */
	printf("%i, %i\n", diagonal_sum1, diagonal_sum2);
}
