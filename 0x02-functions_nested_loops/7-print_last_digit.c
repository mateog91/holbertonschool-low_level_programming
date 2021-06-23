#include "holberton.h"

/**
 * print_last_digit - prints las digit of input interger
 * @n: input interger
 *
 * Return: las digit of interger n
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = n * (-1);
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
