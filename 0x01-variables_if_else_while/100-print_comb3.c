#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Print all numbers of base 16 in lower case followed by a new line
 * Return: 0
 */
int main(void)
{
	/* Variables Declaration */
	int first;
	int last;
	int i;
	int j;

	/* Variables Initialization */
	first = 48;
	last = 57;
	i = first;
	/*
	 * Goes from first to last printing the current value
	 * and restarts +1 when reaching last number
	 */
	while (i <= last)
	{
		putchar(i);
		i++;
		/* Restart variables */
		if (i > last)
		{
			first++;
			i = first;
		}
	}
	/* Print new line */
	putchar('\n');
	return (0);
}
