#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 * @array: Input array to iterate
 * @size: size of array
 * @action: Pointer to function action with input interger and return void
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
