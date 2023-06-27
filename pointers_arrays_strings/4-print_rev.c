#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * print_rev-imprime una cadena, al revés
 * @s: variable de entrada
 */
void print_rev(char *s)
{
	int length = strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		write(1, &s[i], 1);
	}
	write(1, "\n", 1);
}
