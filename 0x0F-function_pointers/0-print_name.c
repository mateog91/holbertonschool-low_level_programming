#include "function_pointers.h"
/**
 * print_name + function that prints a name
 * @name: Input pointer to char with name
 * @f: Pointer to function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
