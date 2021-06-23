#include "holberton.h"

/**
 * print_last_digit - prints las digit of input interger
 * @n: input interger
 *
 * Return: las digit of interger n
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	_putchar('0' + last_digit);
	return (last_digit);
}
