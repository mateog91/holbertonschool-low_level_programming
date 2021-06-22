#include <unistd.h>
#include "holberton.h"
/**
 * print_alphabet - prints lowercase alphabet ending with a new line
 *
 */
void print_alphabet(void)
{
	int i = 97, z = 122;

	while (i <= z)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times seperated by newline
 *
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		print_alphabet();
		i++;
	}
}
