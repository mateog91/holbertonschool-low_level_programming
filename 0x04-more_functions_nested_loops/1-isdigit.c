/**
 * _isdigit - checks for digits 0 to 9
 * @c: interger to check if is digit
 *
 * Return: 1 if is digit, 0 otherwise
 */

int _isdigit(int c)
{
	int first = 48, last = 57;

	if (c >= first && c <= last)
		return (1);
	else
		return (0);
}
