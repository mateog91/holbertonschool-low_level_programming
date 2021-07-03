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
	char c;
	int i, j;
	char numbers[] = "43071";
	char letters[] = "aAeEoOtTlL";

	for (i = 0; s[i]; i++)
	{
		c = s[i];

		for (j = 0; letters[j]; j++)
		{
			if (c == letters[j])
			{
				s[i] = numbers[j / 2];
			}
		}

	}

	return (s);
}
