/**
 * leet - function that encodes a string into 1337.
 * @s: Input string.
 *
 * Description:
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * Restriction:
 * Only one if statement in code and no ternary operations
 * Only two loops
 * No use of switch
 *
 * Return: Pointer to input string.
 */

char *leet(char *s)
{
	char four, three, cero, seven, one, c, nc;
	int i;

	for (i = 0; s[i]; i++)
	{
		c = s[i];

		four = ((c == 'a') + (c == 'A')) * '4';
		three = ((c == 'e') + (c == 'E')) * '3';
		cero = ((c == 'o') + (c == 'O')) * '0';
		seven = ((c == 't') + (c == 'T')) * '7';
		one = ((c == 'l') + (c == 'L')) * '1';

		nc = four + three + cero + seven + one;

		if (nc != 0)
			s[i] = nc;
	}

	return (s);
}
