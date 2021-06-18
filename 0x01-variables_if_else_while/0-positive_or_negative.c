#include<stdio.h>
/**
 * main - Identify if the numer is cero, positive or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* compares if n is greater, less or cero */
	if (n > 0)
	{
		printf("%lu is positive\n");
	}
	else if (n < 0)
	{
		printf("%lu is negative\n");
	}
	else
	{
		printf("%lu is zero\n");
	}
	return (0);
}
