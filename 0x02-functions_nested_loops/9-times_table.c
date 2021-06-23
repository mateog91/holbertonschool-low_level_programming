#include "holberton.h"

/**
 * times_table - prints natural number from n to 98
 */
void times_table(void)
{
	int fila = 0, columna, resultado;

	while (fila <= 9)
	{
		columna = 0;
		while (columna <= 9)
		{
			resultado = fila * columna;
			if (columna == 0)
			{
				_putchar('0' + resultado);
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				if (resultado / 10 == 0)
				{
					/**
					 * Imprime espacio adicional para
					 * numeros de mas de un digito
					 */
					_putchar(' ');
					_putchar('0' + resultado);
				}
				else
				{
					_putchar('0' + resultado / 10);
					_putchar('0' + resultado % 10);
				}
			}
			columna++;
		}
		fila++;
		_putchar('\n');
	}
}
