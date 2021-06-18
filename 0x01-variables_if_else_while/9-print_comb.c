#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Print all posible combinations of single digit numbers
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
		putchar(44);
		putchar(32);
		i++;
	}
	/* Print new line */
	putchar('\n');
	return (0);
}
