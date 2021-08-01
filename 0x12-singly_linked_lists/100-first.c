#include "lists.h"
/**
 * premain - prints something before running the main function
 */
#include <stdio.h>

void __attribute__ ((constructor)) premain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
