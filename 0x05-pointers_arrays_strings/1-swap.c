#include "holberton.h"

/**
 * swap_int - swaps the values of two intergers
 * @a: first interger
 * @b: second interger
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;

}
