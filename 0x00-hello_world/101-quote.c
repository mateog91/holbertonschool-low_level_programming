/**
 * main - Print quote, then print line to std error.
 * Return: 1 if all is ok.
 */

#include<stdio.h>
#include<unistd.h>

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
