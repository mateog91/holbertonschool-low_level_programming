#ifndef VARIADIC_FUNCTIONS_H
#define	VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct type_data - structure of the list that links the char with the funct
 * @c: passedcharacter corresponding to a certain type
 * @f: pointer to function corresponding to the character passed type
 */
typedef struct type_data
{
	char *c;
	void (*f)();
} td;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
