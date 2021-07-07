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
