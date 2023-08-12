#include <stdio.h>
#include "main.h"
/**
 * clear_bit - Funcion q establece el valor de un bit en 0 en un índice dado
 * @n: el numero entero a convertir en binario
 * @index: posicion del indice
 * Return: Devuelve 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
