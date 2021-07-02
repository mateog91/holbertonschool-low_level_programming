/**
 * reverse_array - reverses the content of an array of integers.
 * @a: pointer to first element of array.
 * @n: size of the input array.
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;
	while (i <= ((n + 1) / 2) && (n >= 0))
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
		i++;
	}
}
