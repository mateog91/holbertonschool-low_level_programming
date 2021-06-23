/**
 * _isalpha - check if the input value is an alphabetical character
 * @c: character to check
 *
 * Return: 1 if c is a letter, lower or uppercase and 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
