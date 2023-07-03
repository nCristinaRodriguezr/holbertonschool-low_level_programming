#include <stdio.h>
#include "main.h"
/**
 * print_diagsums-imprime la suma de las dos diagonales
 * de una matriz cuadrada de números enteros
 * @a: puntero 1
 * @size: entero
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	putchar (sum1 + '0');
	putchar (',');
	putchar (' ');
	putchar (sum2 + '0');
}
