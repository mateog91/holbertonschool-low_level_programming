#include <stdio.h>

/**
 * main - Program that prints all argumets it revieves followed by a new line
 * @argc: Number of arguments passed to function
 * @argv: Array of strings with arguments passed to the program
 *
 * Description:
 * All arguments should be printed, including the first on
 * Prints one argument per line, ending with a new line.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
