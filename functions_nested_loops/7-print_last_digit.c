#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * print_last_digit- imrpime el último dígito de un número
 * @n: variable de entrada
 * Return: el valor absoluto
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;
	_putchar (last_digit + '0');
	return (last_digit);
}
