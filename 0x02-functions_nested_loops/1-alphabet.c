#include <unistd.h>
#include "holberton.h"
/**
 * print_alphabet - prints lowercase alphabet using _putchar function
 * 
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
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
