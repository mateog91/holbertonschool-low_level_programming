#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Print reversed lowercase alphabet followed by a new line
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
	i = z;
	/*Go from z to a (lower case) in the ASCII table and print each character*/
	while (i >= a)
	{
		putchar(i);
		i--;
	}
	/*Print new line after the alphabet*/
	putchar('\n');
	return (0);
}
