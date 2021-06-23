#include "holberton.h"

/**
 * jack_bauer - prints every minute of day
 */
void jack_bauer(void)
{
	int hh = 0, mm = 0;

	while (hh < 24)
	{
		while (mm < 60)
		{
			_putchar('0' + (hh / 10));
			_putchar('0' + (hh % 10));
			_putchar(':');
			_putchar('0' + (mm / 10));
			_putchar('0' + (mm % 10));
			mm++;
		}
		hh++;
		mm = 0;
	}
}
