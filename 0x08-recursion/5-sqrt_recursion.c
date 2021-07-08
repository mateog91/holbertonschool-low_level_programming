/**
 * sqr_recursion2 - help function
 * @root: candidate to be a root of target
 * @target: input we want to find the square root for
 *
 * Return: -1 if not a natural square root or natural square root of target
 */
int sqr_recursion2(unsigned long root, unsigned long target)
{
	unsigned long square = root * root;

	/* base case 0 y 1 */
	if (square == target)
	{
		return (root);
	}
	else if (root == 1)
		return (-1);
	else if (square < target)
	{
		/*
		 * si al incrementar se pasa, significa que era menor y
		 * se volvio a pasar, por lo tanto no tiene solucion
		 */
		if (((root + 1) * (root + 1)) > target)
			return (-1);

		return (sqr_recursion2(root + 1, target));
	}
	else
		return (sqr_recursion2(root / 2, target));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Interger input to find the square root of
 *
 * Return: The natural square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqr_recursion2(n, n));
}
