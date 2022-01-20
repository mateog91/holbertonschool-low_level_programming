#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_array(int *array, size_t l, size_t r);

#endif /* SEARCH_ALGOS */
