#include <stdio.h>
#include "main.h"
/**
 * print_alphabet- imprimirá el alfabeto en minuscula
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
