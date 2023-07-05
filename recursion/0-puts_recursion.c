#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion- imprime una cadena,
 * seguida de una nueva línea.
 * @s: variable 1
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}
}
