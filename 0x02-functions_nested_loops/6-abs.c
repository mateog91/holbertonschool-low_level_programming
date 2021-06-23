#include "holberton.h"

/**
 * print_sign - computes absolute value of an interger
 * @n: input interger
 *
 * Return: n as a positive interger
 */
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
