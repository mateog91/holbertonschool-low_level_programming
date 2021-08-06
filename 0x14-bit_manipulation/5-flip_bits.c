/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: Input number 1
 * @m: Inputn number 2
 * Return: the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*
	int count = 0, i = (sizeof(n) * 8 - 1);
	for (; i >= 0; i--)
	{
		if ((((m ^ n) >> i) & 1)  == 1)
			count++;
	}

	return (count);
	*/


	if (n > 1)
		return (((m ^ n) & 1) + flip_bits (n >> 1, m >> 1));

	return (m ^ n);
}
