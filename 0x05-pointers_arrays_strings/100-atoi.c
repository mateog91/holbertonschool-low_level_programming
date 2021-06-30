/**
 * _atoi - converts a string to an interger
 * @s: Input string to be converted to interger
 *
 * Return: interger equivalent to string
 */
int _atoi(char *s)
{
	int current, sign = 1, result = 0, flag = 0;

	for (current = 0; s[current]; current++)
	{
		if (s[current] == '-')
			sign = sign * (-1);

		if (s[current] >= '0' && s[current] <= '9')
		{
			result = ((result * 10) + s[current] - '0');
			flag = 1;
		}
		else if (flag == 1)
			break;
	}
	return (result * sign);
}
