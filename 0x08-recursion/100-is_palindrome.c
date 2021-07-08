int _palindrome2(char *s, int size);

/**
 * is_palindrome - Function that checks if palindrome
 * @s: pointer to string
 *
 * Return: 1 if palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	int size;

	/* Find length of string */
	for (size = 0; s[size] != '\0'; size++)
	{
	}
	
	return (_palindrome2(s, size));
}

int _palindrome2(char *s, int size)
{
	/* Base Cases */
	if (*s != *(s + size - 1))
		return (0);
	else if (size == 2 && *s == *(s + size - 1))
		return (1);
	else if (size == 1)
		return (1);
	else
		/* Recursive Case */
		return _palindrome2(s + 1, size - 2);
}
	
