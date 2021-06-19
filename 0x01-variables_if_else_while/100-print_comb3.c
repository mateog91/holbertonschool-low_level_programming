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
	j = i;
	/*
	 * Goes from first to last printing the current value
	 * and restarts +1 when reaching last number
	 */
	while (j <= last)
	{
		while (i <= last)
		{	
			putchar(j);
			putchar(i);
			printf (", "); /*MUST BE REMOVED*/
			i++;
			/* Restart variables +1 */
			if (i > last)
			{
				first++;
				i = first;
				printf ("\n");/*MUST BE REMOVED*/
			}
		}
		/* Add +1 to counter j*/
		j++;
	}
	/* Print new line */
	putchar('\n');
	return (0);
}
