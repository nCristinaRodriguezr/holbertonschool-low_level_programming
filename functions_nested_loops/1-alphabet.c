#include <stdio.h>
#include "main.h"
/**
 * print_alphabet- imprimirá el alfabeto en minuscula
 */
void print_alphabet(void)
{
	char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	_putchar('\n');
}
