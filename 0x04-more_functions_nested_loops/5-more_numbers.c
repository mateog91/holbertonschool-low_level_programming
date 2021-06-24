#include "holberton.h"

void print_1_14(void);

/**
 * more_numbers - prints 10x #'s 0 to 14 and new line
 */
void more_numbers(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		print_1_14();
	}
}

/**
 * print_1_14 - prints 0 to 14 followed by new line
 */
void print_1_14(void)
{
	int tens = 0, ones;

	while (tens <= 1)
	{
		ones = 0;
		while (ones <= 9)
		{
			/* only print tens when > 0 */
			if (tens > 0)
				_putchar('0' + tens);
			_putchar('0' + ones);
			if (tens == 1 && ones == 4)
				break;
			ones++;
		}
		tens++;
	}
	_putchar('\n');
}
