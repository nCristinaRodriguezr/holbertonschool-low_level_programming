#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers-verifica un digito de 0 a 9
 * con excepcion del 2 y 4
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
