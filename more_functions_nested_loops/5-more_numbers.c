#include <stdio.h>
#include "main.h"
/**
 * more_numbers-imprime 10 veces los numeros
 * del 1 al 14
 */
void more_numbers(void)
{
	 int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
