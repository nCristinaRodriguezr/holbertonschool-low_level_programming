#include <stdio.h>
#include "main.h"
/**
 * print_binary - Funcion que pasa un decimal a numero binario
 * @n: puntero que apunta a una cadena de numero
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}
