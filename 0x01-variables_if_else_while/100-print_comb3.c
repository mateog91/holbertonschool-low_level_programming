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
	while (j <= last)
	{
		while (i <= last)
		{
			/* print only if i and j are different */
			if (i != j)
			{
				putchar(j);
				putchar(i);
				/*check if it would be the las print*/
				if (i == j + 1 && j + 1 == last)
				{
				}
				else
				{
					putchar(44);
					putchar(32);
				}
			}
			i++;
		}
		/* Restart variables +1 */
		first++;
		i = first;
		/* Add +1 to counter j*/
		j++;
	}
	/* Print new line */
	putchar('\n');
	return (0);
}
