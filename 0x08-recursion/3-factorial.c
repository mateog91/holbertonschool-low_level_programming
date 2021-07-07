#include "holberton.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: Input interger.
 *
 * Return: Interger factorial of input interger @n.
 */
int factorial(int n)
{
	/* Base case  */
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);

	/* Recursive case */
	return (n * factorial(n - 1));
}
