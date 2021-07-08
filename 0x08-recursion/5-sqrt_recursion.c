/**
 * sqr_recursion2 - help function
 * @root: candidate to be a root of target
 * @target: input we want to find the square root for
 *
 * Return: -1 if not a natural square root or natural square root of target
 */
int sqr_recursion2(int root, int target)
{
	/* base case */
	if (root < 0)
		return (-1);
	else if (root * root == target)
		return (root);

	/* recursive case */
	return (sqr_recursion2(root - 1, target));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: Interger input to find the square root of
 *
 * Return: The natural square root of @n
 */
int _sqrt_recursion(int n)
{
	return (sqr_recursion2(n, n));
}
