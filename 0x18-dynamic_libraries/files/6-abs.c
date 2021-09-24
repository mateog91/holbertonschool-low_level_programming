#include "holberton.h"

/**
 * _abs - computes absolute value of an interger
 * @n: input interger
 *
 * Description: Returns the absolute value of the input interger
 * Return: n as a positive interger
 */
int _abs(int n)
{
	if (n < 0)
		return (n * (-1));
	else
		return (n);
}
