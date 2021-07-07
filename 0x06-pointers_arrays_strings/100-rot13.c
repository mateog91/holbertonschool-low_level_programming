/**
 * rot13 - rotate 13
 * @s: inputstring
 *
 * Return: Pointer to string
 */
char *rot13(char *s)
{
	for (i = 0; s[i]; i++)
	{
		s[i] = s[i] + 13;
	}
	return (s);
}
