#include <stdio.h>
#include "main.h"
/**
 * print_square-imprime un cuadrado
 * @size: variable de entrada
 * Return: destruye
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
