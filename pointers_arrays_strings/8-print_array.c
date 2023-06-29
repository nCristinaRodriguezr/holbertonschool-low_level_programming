#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_array-imprime n elementos de un array de enteros
 * @a: variable de entrada
 * @n: variable 2
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
		_putchar('\n');
	}
}
