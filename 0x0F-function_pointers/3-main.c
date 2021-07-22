#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: Number of inputs
 * @argv: Array of inputs
 *
 * Desciption:
 * First input: first interger
 * Second input: Operand
 * Third input: second interger
 *
 * Return: 0 if success
 * if the number of arguments is wrong, print Error, followed by a new line,
 * and exit with the status 98
 * if the operator is none of the above, print Error, followed by a new line,
 * and exit with the status 99
 * if the user tries to divide (/ or %) by 0, print Error, followed by a new
 * line, and exit with the status 100
 */
int main(int argc, char *argv[])
{
	int first, second, result;
	char *s = argv[2];


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	first = atoi(argv[1]);
	second = atoi(argv[3]);

	if (second == 0 && (*s == '/' || *s == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	if ((*s != '+' && *s != '-' && *s != '*' && *s != '/' && *s != '%')
			|| *(s + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	result = ((get_op_func(s))(first, second));
	printf("%i\n", result);

	return (0);
}
