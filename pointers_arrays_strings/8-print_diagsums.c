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
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j == i)
			{
				sum1 = sum1 + a[i * size + j];
			}
			if (j == size - 1 - i)
			{
				sum2 = sum2 + a[i * size + j];
			}
		}
	}
	putchar (sum1 + '0');
	putchar (',');
	putchar (' ');
	putchar (sum2 + '0');
}
