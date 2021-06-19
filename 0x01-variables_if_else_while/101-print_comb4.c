#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - Print all numbers of base 16 in lower case followed by a new line
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int last;

	last = 57;
	k = 48;
	j = 49;
	i = 50;
	while (k <= last)
	{
		while (j <= last)
		{
			while (i <= last)
			{
				putchar(k);
				putchar(j);
				putchar(i);
				if (i == 57 && j == 56 && k == 55)
				{
				}
				else
				{
					putchar(44);
					putchar(32);
				}
				i++;
			}
			j++;
			i = j + 1;
		}
		k++;
		j = k + 1;
		i = j + 1;
	}
	putchar('\n');
	return (0);
}
