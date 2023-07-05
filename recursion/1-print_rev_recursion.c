#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion- imprime una cadena al revés
 * seguida de una nueva línea.
 * @s: variable 1
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
	else
	{
		putchar('\n');
	}
}
