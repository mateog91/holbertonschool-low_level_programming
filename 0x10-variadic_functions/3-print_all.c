#include "variadic_functions.h"

/**
 * printchar - prints a char
 * @list: list with elements to print
 */
void printchar(va_list list)
{
	printf("%c", va_arg(list, int));
}

/**
 * printint - prints a interger
 * @list: list with elements to print
 */
void printint(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
 * printfloat - prints a float
 * @list: list with elements to print
 */
void printfloat(va_list list)
{
	printf("%f", va_arg(list, double));
}

/**
 * printstr - prints a string
 * @list: list with elements to print
 */
void printstr(va_list list)
{
	char *string;

	string = va_arg(list, char*);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}
/**
 * print_all - function that prints anything
 * @format: string with format of each passed variable to print
 *
 * Description:
 * format is a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 */
void print_all(const char * const format, ...)
{
	td array_data[] = {
		{"c", printchar},
		{"i", printint},
		{"f", printfloat},
		{"s", printstr},
		{NULL, NULL}
	};
	int i = 0, j;
	void (*fun_ptr)(va_list);
	char *separator = "";
	va_list list;

	va_start(list, format);
	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(array_data[j].c))
			{
				printf("%s", separator);
				fun_ptr = array_data[j].f;
				fun_ptr(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}

