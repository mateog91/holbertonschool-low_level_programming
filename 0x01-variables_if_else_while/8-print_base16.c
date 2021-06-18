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
	int first;
	int last;
	int i;

	/* your code goes there */
	/* Variables Initialization */
	first = 48;
	last = 57;
	i = first;
	/*
	 * Goes from first to last printing the current value
	 * and restarts when meeting conditions inside if statment
	 */
	while (i <= last)
	{
		putchar(i);
		i++;
		/* Restart variables */
		if (i == 58)
		{
			first = 97;
			last = 102;
			i = first;
		}
	}
	/* Print new line */
	putchar('\n');
	return (0);
}
