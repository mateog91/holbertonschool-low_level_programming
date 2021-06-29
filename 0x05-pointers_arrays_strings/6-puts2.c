#include "holberton.h"

/**
 * _puts2 - prints every other char of string followed by a new line
 * @str: - pointer to first character of string
 *
 */

void _puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
		_putchar(str[i]);

	_putchar('\n');
}
