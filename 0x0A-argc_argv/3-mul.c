#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program that multiplies two numbers
 * @argc: Number of arguments passed to function
 * @argv: Array of strings with arguments passed to the program
 *
 * Description:
 * Assumes both input arguments are intergers
 * Prints result of multiplication followed by new line
 * If program does not recieve exactly two arguments, prints "Error" new line
 *
 * Return: If success returns 0, if not return 1.
 */
int main(int argc, char *argv[])
{
	int result;


	/* Checks if exactly 2 arguments (3 with file name) were recived */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* Prints and returns multiplication of inputs */
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
