#include <stdio.h>
#include "main.h"
/**
 * print_number-imprime numero de mas de dos digitos
 * @n: variable de entrada
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
		n %= 10;
	}
	putchar('0' + n);
}
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
				sum1 = sum1 + *(a + (i * size + j));
			}
			if (j == size - 1 - i)
			{
				sum2 = sum2 + *(a + (i * size + j));
			}
		}
	}
	print_number(sum1);
	putchar (',');
	putchar (' ');
	print_number(sum2);
}
