#include "main_h"

/*
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print in binary
 *
 * Return: Nothing.
 */
void print_binary(unsigned long int n)
{
	/* Recursive Case */
	if (n > 1)
		print_binary(n >> 1);
	/* Base Case */
	putchar((n & 1) + '0');
}
