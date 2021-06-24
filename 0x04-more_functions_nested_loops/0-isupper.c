/**
 * _isupper - checks for uppercase character
 * @c: interger to check
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int first = 65, last = 90;

	if (c >= first && c <= last)
		return (1);
	else
		return (0);
}
