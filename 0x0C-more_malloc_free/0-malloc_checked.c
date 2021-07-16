#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: memory size to allocate
 *
 * Return: pointer to hte allocated memory
 * If fails normal process termination with a status valuo of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = (malloc(b));
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
