#include <stdlib.h>
#include <stdio.h>
/**
 * main- imprimirá el alfabeto en minuscula excluyendo letras
 * Return: siempre devuelve 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
		putchar(c);
	putchar('\n');
	return (0);
}
