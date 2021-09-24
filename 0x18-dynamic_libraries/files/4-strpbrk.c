/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: input string to be searched.
 * @accept: characters to search position in @s string.
 *
 * Description:
 * Locates the first occurrence in the string s of any of the bytes in the
 * string accept
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (&s[i]);

			j++;
		}
		i++;
	}
	return (0);
}
