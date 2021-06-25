#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int bigger;
	int largest;

	if (a > b)
		bigger = a;
	else
		bigger = b;
	if (bigger > c)
		largest = bigger;
	else
		largest = c;
	return (largest);
}
