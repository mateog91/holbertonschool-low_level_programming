#include "holberton.h"
/**
 * _puts_recursion- function that printsa string, followed by a new line.
 * @s: Pointer to input string to print
 *
 */
void _puts_recursion(char *s)
{
	/*
	 * Base Case:
	 * Reaches the null byte, print new line, and return.
	 */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	/*
	 * Recursive Case:
	 * Prints the value of the pointer
	 */
	_putchar(*s);
	_puts_recursion(s + 1);
}
