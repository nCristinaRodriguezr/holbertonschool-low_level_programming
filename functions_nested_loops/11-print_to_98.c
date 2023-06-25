#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <unistd.h>
/**
 * print_number-imprime numero de mas de dos digitos
 * @n: variable de entrada
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
		n %= 10;
	}
	_putchar('0' + n);
}
/**
 * print_to_98- imprime numeros natuales desde n a 98
 * @n: variable de entrada
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (int i = n; i <= 98; i++)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (int i = n; i >= 98; i--)
		{
			print_number(i);
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
