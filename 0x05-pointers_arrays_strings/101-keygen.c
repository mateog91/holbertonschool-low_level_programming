#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Identify if the number is cero, positive or negative
 * Return: 0
 */
int main(void)
{
	unsigned int n;
	int i;
	
	srand(time(0));
	for (i = 0; i < 30; i++)
	{
		/* Genera numero aleatorio entre 0 y 32767 */
		n = rand() % 95 + 33;
		printf("n: %i\n", n);
	}
}
