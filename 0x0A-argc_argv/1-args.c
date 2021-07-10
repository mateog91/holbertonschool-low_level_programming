#include <stdio.h>

/**
 * main - program that prints the number of argumentes passed into it
 * @argc: number of arguments passed into program
 * @argv: array of strings with arguments passed into program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}

