#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: Pointer to input string
 * @s2: Pointer to second input string
 * @n: Characters to concatenete from @s2 to @s1
 *
 * Description:
 * If n is greater or equal to the length of s2 then use the entire string s2
 * If NULL is passed, treat it as an empty string
 *
 * Return:
 * The returned pointer shall point to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2, and null terminated
 * If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1, length2, total_length, i;
	char *ptr;

	/* If NULL is passed treat it as empty string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*Finds length of first string */
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	length1 = i;
	/*Finds length of second string */
	for (i = 0; s2[i] != '\0'; i++)
	{
	}
	length2 = i;
	if (n > length2)
		n = length2;

	/*Sums total length, + 1 for the null value at the end of the concatenation*/
	total_length = length1 + n;
	/*Allocates memory for new space for the concatenation and checks if fails*/
	ptr = (char *)malloc(sizeof(char) * (total_length + 1));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < total_length; i++)
	{
		if (i < length1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - length1];
	}
	ptr[total_length] = '\0';
	return (ptr);
}
