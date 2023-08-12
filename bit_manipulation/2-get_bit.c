#include <stdio.h>
#include "main.h"
/**
 * get_bit - Funcion que devuelve el valor de un bit de un indice dado
 * @index: posicion del indice
 * @n: el numero entero a convertir en binario
 * Return: Devuelve el numero binario en la posicion del index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	return (n & mask) ? 1 : 0;
}


