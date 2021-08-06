#include "main.h"

/**
 */
 int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 8 * sizeof(n))
		return (-1);
	*n |= 1 << index;
	return (1);
}
