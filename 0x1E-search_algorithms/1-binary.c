#include "search_algos.h"

/**
 * binary_search - Write a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Description:
 * You can assume that array will be sorted in ascending order
 * You must print the array being searched every time it changes.
 * (e.g. at the beginning and when you search a subarray)
 *
 * Return:
 * the first index where value is located
 * If value is not present in array or if array is NULL
 * your function must return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;
	while (l <= r)
	{
		m = (l + r) / 2;
		print_array(array, l, r);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}
	return (-1);
}

/**
 * print_array - prints an array according to the format
 *
 * @array: pointer to the array
 * @l: starting index to print
 * @r: final index to print
 */

void print_array(int *array, size_t l, size_t r)
{
	size_t i;

	printf("Searching in array:");

	for (i = l; i <= r; i++)
	{
		if (i != l)
			printf(", ");
		else
			printf(" ");
		printf("%i", array[i]);
	}
	printf("\n");
}
