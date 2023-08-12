#include <stdio.h>
#include "main.h"
/**
 * set_bit - Funcion q establece el valor de un bit en 1 en un índice dado
 * @n: el numero entero a convertir en binario
 * @index: posicion del indice
 * Return: Devuelve en nuevo numero
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1<< index);
	return (1);
}
