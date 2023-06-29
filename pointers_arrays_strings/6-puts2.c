#include <stdio.h>
#include "main.h"
/**
 * puts2-imprime una caracter si y otro no de una cadena de texto
 * @str: variable de entrada
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i = i + 2;
	}
	putchar('\n');
}
