/**
 * prime_helper - function which checks if prime
 * @n: User input interger to check if prime
 * @divisor: Number from n/2 to 2 checking if n is divisible by this number
 *
 * Description:
 * Checks if prime with base cases:
 * 1: if n is divisible by divisor (modulus is 0), then prime
 * 2: if divisor reaches 2, means it is prime because it was not divisible by
 * any number from n/2 to 2.
 * Note: Divisor is seeded as n/2 no number greater that n/2 * divisor would
 * have as result the input number @n.
 * Recursive case: pases same @n and subtracts 1 to divisor.
 *
 * Return: 1 if prime 0 if not prime.
 */

int prime_helper(int n, int divisor)
{
	/* Base Cases */

	/* if modulus of n by incremental value is 0, then not prime */
	if (n % divisor == 0)
	{
		return (0);
	}
	/* if divisor reaches 2 means it is prime bcause not divisible */
	else if (divisor == 2)
	{
		return (1);
	}
	/* Recursive Case */
	return (prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - function which cheks if prime
 * @n: Input interger to check if prime
 *
 * Description:
 * Base cases:
 * 1. By definition a prime is greater than 1
 * 2. By definition intergers 1 and 2 are prime
 * 3. Optimization: All even numbers are not prime.
 *
 * Return: 1 if prime, 0 if not prime.
 */

int is_prime_number(int n)
{
	/* Base cases */
	if (n < 2)
		return (0);

	if (n == 1 || n == 2)
		return (1);

	if (n % 2 == 0)
		return (0);

	/* Enter recursive function */
	return (prime_helper(n, n / 2 + 1));


}
