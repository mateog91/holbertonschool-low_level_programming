#include "holberton.h"

/**
 * print_rev - prints a string in reverse followed by new line
 * @s: input string
 *
 */
void print_rev(char *s)
{

	int i = 0;

	while (s[i] != '\0')
		i++;


	for (; i > 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
