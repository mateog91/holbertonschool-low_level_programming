#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coints to make a change for an amount
 * @argc: number of inputs
 * @argv: pointer to array with input strings
 * Description:
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int coins = 0, change;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = atoi(argv[1]);
	while (change > 0)
	{
		if (change >= 25)
		{
			change = change - 25;
			coins++;
		}
		else if (change >= 10)
		{
			change = change - 10;
			coins++;
		}
		else if (change >= 5)
		{
			change = change - 5;
			coins++;
		}
		else if (change >= 2)
		{
			change = change - 2;
			coins++;
		}
		else if (change >= 1)
		{
			change = change - 1;
			coins++;
		}
	}
		printf("%d\n", coins);
		return (0);
}
