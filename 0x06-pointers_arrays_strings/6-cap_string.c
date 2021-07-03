/**
 * cap_string - function that capitalizes all words of a string.
 * @s: Pointer to input string
 *
 * Description:
 * Capitalizes Separators of words: space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 *
 * Return: Pointer to input string
 */
char *cap_string(char *s)
{
	int i;
	char c;


	/* Check if first char is lower case, if so change to upper */
	i = 0;
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;

	/* Goes through string starting at position 1 */
	for (i = 1; s[i]; i++)
	{
		/* Check if previous char is a seperator */
		c = s[i - 1];
		if (c == 9 || c == 10 || c == 32 || c == ',' || c == ';'
			|| c == '!' || c == '?' || c == '(' || c == ')'
			|| c == '{' || c == '}' || c == '.')
		{
			/* Change current char to upper case  */
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
