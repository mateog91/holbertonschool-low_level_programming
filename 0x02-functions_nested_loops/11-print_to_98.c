#include <stdio>
#include "holberton.h"

/**
 * print_to_98 - prints natural number from n to 98
 * @n: Interger
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
}
