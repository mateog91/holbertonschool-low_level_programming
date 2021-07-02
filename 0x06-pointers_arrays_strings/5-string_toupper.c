/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @s: Input string.
 *
 * Return: Pointer to string s.
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
