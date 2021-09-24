/**
 * _atoi - converts a string to an interger
 * @s: Input string to be converted to interger
 *
 * Return: interger equivalent to string
 */
int _atoi(char *s)
{
	int current, sign = 1, flag = 0, value;
	unsigned int result = 0;

	for (current = 0; s[current]; current++)
	{
		if (s[current] == '-')
			sign = sign * (-1);

		if (s[current] >= '0' && s[current] <= '9')
		{
			value = s[current] - '0';
			result = result * 10;
			result = result + value;

			flag = 1;
		}
		else if (flag == 1)
			break;
	}
	if (sign < 0)
		result = result * (-1);

	return (result);
}
