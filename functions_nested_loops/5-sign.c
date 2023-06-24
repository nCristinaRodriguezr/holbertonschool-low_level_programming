#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>
/**
 * print_sign- devuelve muchas cosas
 * @n: variable de entrada
 * Return: devuelve 0 , 1 o -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		int c = '+';

		write(1, &c, 1);
		return (1);
	}
	else if (n == 0)
	{
		int c = '0';

		write(1, &c, 1);
		return (0);
	}
	else
	{
		int c = '-';

		write(1, &c, 1);
		return (-1);
	}
}
