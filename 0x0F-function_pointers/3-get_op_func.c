#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selects desired function to perfor operation asked by user
 * @s: Operator passed as argument to the program
 *
 * Description:
 * This connects the input string with the symbol of the operation
 * with the corresponding function.
 *
 * Return:
 * This function returns a pointer to the function that corresponds to the
 * operator given as a parameter. Example: get_op_func("+") should return a
 * pointer to the function op_add
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	while (i < 6)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
