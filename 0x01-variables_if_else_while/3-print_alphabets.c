#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Print lowercase alphabet followed by a new line
 * Return: 0
 */
int main(void)
{
	int a;
	int z;
	int i;

	/* your code goes there */
	/* Variables Initialization */
	a = 97;
	z = 122;
	i = a;
	/*Go from a to z (lower case) in the ASCII table and print each character*/
	while (i <= z)
	{
		putchar(i);
		i++;
		/* Restart variables to print A to z (upper case) */
		if (i == 123)
		{
			a = 65;
			z = 90;
			i = a;
		}
	}
	/*Print new line after the alphabet*/
	putchar('\n');
	return (0);
}
