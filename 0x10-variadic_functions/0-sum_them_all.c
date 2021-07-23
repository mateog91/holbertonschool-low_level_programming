#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: count of variable parameters that are goint to be input to function
 *
 * Return:
 * sum of parameters, if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	/* declares list_numbers as data stuture type va_list */
	va_list list_number;
	/* declares variables */
	unsigned int i;
	int sum;

	/* starts variadic macro */
	va_start(list_number, n);

	/* Check if count of input numbers to sum is cero */
	if (n == 0)
		return (0);

	sum = 0;
	/* looks for the optional variables */
	for (i = 0; i < n; i++)
		sum = sum + va_arg(list_number, int);

	va_end(list_number);

	return (sum);
}
