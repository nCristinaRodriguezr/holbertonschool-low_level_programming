#include <stdlib.h>
#include <stdio.h>
/**
 * main- imprimirá el alfabeto en minuscula y MAYUSCULA
 * Return: siempre devuelve 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'a' - ('a' - 'A'); c <= 'z' - ('a' - 'A'); c++)
		putchar(c);
	putchar('\n');
	return (0);
}
