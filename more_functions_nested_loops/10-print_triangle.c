#include <stdio.h>
#include "main.h"
/**
 * print_triangle-imprime un triangulo
 * @size: variable de entrada
 * Return: destruye
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (size - 1 - i > j)
			{
				putchar(' ');
			}
			else
			{
				putchar('#');
			}
		}
		putchar('\n');
	}
}
