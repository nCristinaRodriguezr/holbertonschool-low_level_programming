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
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else
	{
		printf("-");
		return (-1);
	}
}
