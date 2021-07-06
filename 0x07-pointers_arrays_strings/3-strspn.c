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
	int i = 0, count = 1, j;
	char break2 = 0;

	while ((s[i]) && (break2 == 0))
	{
		j = 0;
		while (accept(j))
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
				if (accept[j])
				{
					return (count);
				}
			}
		}
	}
	return (count);
}
