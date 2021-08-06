#include "main.h"
/**
 * get_bit - function that prints the binary representation of a number.
 * @n: Input bit
 * @index:i s the index, starting from 0 of the bit you want to get 
 *
 * Description:
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	/* Recursive Case */
	if (index > 0)
		return (get_bit(n >> 1, index - 1));
	/* Base Case */
	if (index == 0)
      		return (n & 1);
	return (-1);

}
