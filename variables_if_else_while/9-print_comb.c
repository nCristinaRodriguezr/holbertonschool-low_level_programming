#include <stdlib.h>
#include <stdio.h>
/**
 * main- imprimirá todas las combinaciones
 * posibles de números de un solo dígito
 * Return: siempre devuelve 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
