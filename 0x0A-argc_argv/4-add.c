#include <stdio.h>
#include <stdlib.h>

int _isdigit(int c);

/**
 * main - program that adds positive numbers
 * @argc: number of inputs
 * @argv: pointer to array with input strings
 * Description:
 * If input has symbol not a digit print error and return 1
 * Assume that all numbers can be stored in int
 *
 * Return: 1 if error, 0 if success
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, check;

	if (argc == 0)
	{
		printf("0");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		check = _isdigit(*argv[i]);
		/* printf("check: %i\n", check);*/
		if (check == 0)
		{
			printf("Error\n");
			return (1);
		}
		/*printf("argv[%d] = %s\n", i, argv[i]);*/
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * _isdigit - checks for digits 0 to 9
 * @c: interger to check if is digit
 *
 * Return: 1 if is digit, 0 otherwise
 */
int _isdigit(int c)
{
	int first = 48, last = 57;

	if (c >= first && c <= last)
		return (1);
	else
		return (0);
}
