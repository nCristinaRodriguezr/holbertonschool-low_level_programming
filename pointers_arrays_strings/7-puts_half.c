#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half- devuelve 1 si es minus y 0 si no
 * @str: variable de entrada
 */
void puts_half(char *str)
{
	int length = strlen(str);
	int half_length;

	if (length % 2 == 0)
	{
		half_length = length / 2;
	}
	else
	{
		half_length = length / 2 + 1;
	}
	while (half_length < length)
	{
		_putchar(str[half_length]);
		half_length++;
	}
	putchar('\n');
}
