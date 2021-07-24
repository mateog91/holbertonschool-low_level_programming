#include "variadic_functions.h"

/**
 * print_strings - prints the passed strings
 * @separator: Separator used between strings
 * @n: number of passed strings
 *
 * Description:
 * if separator is NULL, dont print it
 * if one of the string is NULL, print (nil) instead
 * print new line at end of function
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string_list;
	unsigned int i;
	char *current_string;

	va_start(string_list, n);

	for (i = 0; i < n; i++)
	{
		current_string = va_arg(string_list, char *);

		if (current_string == NULL)
			printf("(nil)");
		else
			printf("%s", current_string);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(string_list);
}
