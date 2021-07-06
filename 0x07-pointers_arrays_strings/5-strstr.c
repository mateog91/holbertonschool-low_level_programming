/**
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, n;

	/* find length of needle */
	for (j = 0; needle[j] != '\0'; j++)
	{
	}
	n = j;

	/* Go through hay */
	while (haystack[i + n - 1] != '\0')
	{
		j = 0;
		/*
		 * go simultaneosly through each c in hay at position i + j and
		 * compare with c in needle at position j.
		 */
		while (haystack[i + j] == needle[j] && needle[j])
		{
			j++;
		}
		/*
		 * If goes through all needle means it was a match so return hay
		 * at position i
		 */
		if (j == n)
			return (&haystack[i]);
		i++;
	}

	/* Did not find a match, return Null */
	return (0);
}