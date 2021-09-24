/**
 * _strcmp - function that compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Description:
 * Compares two strings by evaluating each character,
 * subtracting the corresponding value acording to the ASCII table.
 *
 * Return: Interger, 0 if equal, positive if s1[i] > s2[i]
 * negative if s1[i] < s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int r, i = 0;

	do {
		r = s1[i] - s2[i];
		i++;
	} while (r == 0 && s1[i] != '\0' && s2[i] != '\0');

	return (r);
}
