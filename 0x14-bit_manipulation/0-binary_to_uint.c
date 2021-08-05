#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: string with binary number to convert to unsigned int
 *
 * Return:
 * the converted number
 * 0 if:
 * there is one or more chars in the string b that is not 0 or 1
 * or b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0, i = 0;

	/* check if pointer is null */
	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		value <<= 1;
		value += (b[i] - '0');
		i++;
	}
	return (value);
}
