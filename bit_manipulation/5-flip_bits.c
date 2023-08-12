#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Funcion devuelve la cantidad de bits que necesitaría
 * cambiar para pasar de un número a otro
 * @n: el numero a convertir
 * @m: numero al que n debe llegar
 * Return: Devuelve cuanto necesita n para llegar a ser como m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}
