#include "holberton.h"
#include <stdio.h>
/**
 * puts_half - prints the second half of a string followed by a new line
 * @str: - pointer to first character of string
 *
 */

void puts_half(char *str)
{
	int len, n;

	/* finds length of string */
	for (len = 0; str[len]; len++)
	{
	}
	/*printf("valor de len: %d\n", len); */
	/* len--; */
	/* finds start of second half */
	if ((len) % 2 != 0)
		n = (len + 1) / 2;
	else
		n = (len + 1) / 2;

	/*printf("valor de n: %d\n", n);*/
	/* prints string from n to the end */
	for (; str[n]; n++)
	{
	/*	printf("valor actual de n dentro del for es: %d\n", n); */
		_putchar(str[n]);
	}
	_putchar('\n');
}
