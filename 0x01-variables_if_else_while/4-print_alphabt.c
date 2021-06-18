#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Print lowercase (except q and e) alphabet followed by a new line
 * Return: 0
 */
int main(void)
{
	int a;
	int z;
	int i;
	int e;
	int q;

	/* your code goes there */
	/* Variables Initialization */
	a = 97;
	z = 122;
	i = a;
	e = 101;
	q = 113;
	/*Go from a to z (lower case) in the ASCII table and print each character*/
	while (i <= z)
	{
		/* check if current letter (i) is not e or q */
		if (i != e && i != q)
			putchar(i);
		i++;
	}
	/*Print new line after the alphabet*/
	putchar('\n');
	return (0);
}
