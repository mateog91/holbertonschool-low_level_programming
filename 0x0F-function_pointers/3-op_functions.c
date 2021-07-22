#include "3-calc.h"
/**
 * op_add - Adds a and b
 * @a: first interger
 * @b: second interger
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracs b from a
 * @a: first interger
 * @b: second interger
 *
 * Return: Difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies a and b
 * @a: first interger
 * @b: second interger
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a in b
 * @a: first interger
 * @b: second interger
 *
 * Return: result of interger division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulus of a and b
 * @a: first interger
 * @b: second interger
 *
 * Return: The remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
