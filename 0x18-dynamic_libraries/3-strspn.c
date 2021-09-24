/**
 * _strspn - gets length of a prefix substring.
 * @s: input string to compare with @accept.
 * @accept: characters that @s will search if they are part or not.
 *
 * Return: Number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, count = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
				i++;
				break;
			}
			else
			{
				j++;
				if (accept[j] == '\0')
				{
					return (count);
				}
			}
		}
	}
	return (count);
}
