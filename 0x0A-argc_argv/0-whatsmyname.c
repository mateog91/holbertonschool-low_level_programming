#include <stdio.h>

/**
 * main - Program that prints its name, followed by a new line
 * @argc: Number of arguments passed to function
 * @argv: Array of strings with arguments passed to the program
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;

	return (0);
}
