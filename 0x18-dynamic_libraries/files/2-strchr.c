/**
 * _strchr - function that locates a character in a string.
 * @s: input string in which it will search.
 * @c: character to search in string @s.
 *
 * Return: pointer to @c in @s or NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *ptr = 0;

	/* Go through input string*/
	while (s[i])
	{
		/* Search for char 'c' in input string */
		if (s[i] == c)

			/* Return address where it was found */
			return (&s[i]);
		i++;
	}

	if (s[i] == c)
		return (&s[i]);

	/* Return NULL if did not found the char 'c' in string */
	return (ptr);
}
