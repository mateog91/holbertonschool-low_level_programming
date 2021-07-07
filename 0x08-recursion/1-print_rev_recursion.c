#include "holberton.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: Pointer to input string.
 *
 */
void _print_rev_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
	{
		return;
	}

	/* Recursive case */
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
