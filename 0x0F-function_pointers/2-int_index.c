#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an interger
 * @array: pointer to array of intergers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return:
 * returns the index of the first element for which the cmp function does not
 * return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
