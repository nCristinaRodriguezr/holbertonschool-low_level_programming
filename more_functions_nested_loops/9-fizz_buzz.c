#include <stdio.h>
#include "main.h"
/**
 * print_number-imprime numero dado
 * @n: variable 1
 */
void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		print_number(n / 10);
		n %= 10;
	}
	putchar('0' + n);
}
/**
 * print_text-imprime cadena de caracteres
 * @c: variable 1
 */
void print_text(const char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		putchar(c[i]);
		i++;
	}
}
/**
 * fizzBuzz-imprima los números del 1 al 100
 * Pero para los múltiplos de tres, escriba Fizz en lugar del número
 * para los múltiplos de cinco, escriba Buzz
 * Para números que son múltiplos de tres y cinco, imprima FizzBuzz
 */
void fizzBuzz(void)
{
	int i;

	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzBuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			print_text(fizzBuzz);
		}
		else if (i % 3 == 0)
		{
			print_text(fizz);
		}
		else if (i % 5 == 0)
		{
			print_text(buzz);
		}
		else
		{
			print_number(i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}
/**
 * main- imprimirá _putchar
 * Return: siempre devuelve 0
 */
int main(void)
{
	fizzBuzz();
	return (0);
}
