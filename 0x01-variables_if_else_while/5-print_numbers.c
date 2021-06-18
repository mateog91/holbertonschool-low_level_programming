#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Prints all single digit numbers of base 10
 * starting from 0, followed by a new line
 * Return: 0
 */
int main(void)
{
	int first;
	int last;
	int i;

	/* your code goes there */
	/* Variables Initialization */
	first = 48;
	last = 57;
	i = first;
	/*Go from 0 to 9 in ASCII table*/
	while (i <= last)
	{
		putchar(i);
		i++;
	}
	/*Print new line*/
	putchar('\n');
	return (0);
}
