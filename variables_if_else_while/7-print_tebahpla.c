#include <stdlib.h>
#include <stdio.h>
/**
 * main- imprimirá el alfabeto en minuscula al revés
 * Return: siempre devuelve 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
