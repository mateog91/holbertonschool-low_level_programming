/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: input value of exponential base
 * @y: input value for exponent
 *
 * Return: Interger of @x to the power of @y
 */
int _pow_recursion(int x, int y)
{
	/* Base Case */
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	/* Recursive Case */
	return (x * _pow_recursion(x, (y - 1)));
}
