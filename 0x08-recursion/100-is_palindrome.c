int _palindrome2(char *s, int size);
int _strlen_recursion(char *s);

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
	size = _strlen_recursion(s);

	return (_palindrome2(s, size));
}
/**
 * _palindrome2 - Function that finds if string is palindrome
 * @s: Input string
 * @size: Size of string
 *
 * Return: If palindrome return 1, if not return 0.
 */
int _palindrome2(char *s, int size)
{
	/* Base Cases */
	if (*s != *(s + size - 1))
		return (0);
	else if (size == 2 && *s == *(s + size - 1))
		return (1);
	else if (size == 1)
		return (1);

	/* Recursive Case */
	return (_palindrome2(s + 1, size - 2));
}

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: pointer to input string.
 * Description:
 * Finds the length of the string pointed by @s
 *
 * Return: Interger with length of string which @s points to.
*/
int _strlen_recursion(char *s)
{
	/* Base case */
	if (*s == '\0')
		return (0);

	/* Recursive case */
	return (1 + _strlen_recursion(s + 1));
}

