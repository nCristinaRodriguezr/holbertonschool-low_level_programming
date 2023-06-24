#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * print_sign- devuelve muchas cosas
 * @n: variable de entrada
 * Return: devuelve 0 , 1 o -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('e');
		return (2);
	}
	else if (n == 0)
	{
		putchar('r');
		return (0);
	}
	else
	{
		putchar('t');
		return (-1);
	}
}
