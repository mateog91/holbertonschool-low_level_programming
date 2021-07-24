#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of intergers passed to the function
 *
 * Description:
 * If separator is NULL, dont print it
 * Prints a new line at hte end of the function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* initialize list */
	va_list number_list;
	unsigned int i;

	/* initialize the argument list */
	va_start(number_list, n);

	/* go through all passed optional parameters */
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(number_list, int));
		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	/* print new line after last number */
	printf("\n");
}
