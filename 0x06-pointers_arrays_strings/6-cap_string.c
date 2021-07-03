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
	int i, c;


	/* Goes through string starting at position 1 */
	for (i = 0; s[i]; i++)
	{
		/* Check if first char is lower case, if so change to upper */
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;

		/* Check if previous char is a seperator */
		c = s[i - 1];
		if (c == 9 || c == 10 || c == 32 || c == ',' || c == ';'
			|| c == '!' || c == '?' || c == '(' || c == ')'
			|| c == '{' || c == '}')
		{
			/* Change current char to upper case  */
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = s[i] - 32;
		}
	}
	return (s);
}
