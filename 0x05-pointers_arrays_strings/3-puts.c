#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 * @str: - pointer to first character of string
 *
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
