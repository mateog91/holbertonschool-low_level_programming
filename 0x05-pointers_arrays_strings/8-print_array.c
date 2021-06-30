#include <stdio.h>
#include "holberton.h"

/**
 print_array - prints elements of an array of intergers followed by new line
 @a: array of intergers
 @n: number of elements in array
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", *a);

		printf(", %d", *(a + i));
	}
	printf("\n");
}
