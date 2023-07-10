#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <stdbool.h>
/**
 * esNumeroPositivo- valida si la cadena tiene un numero entero o no
 * @cadena: la cadena que se evalua
 * Return: Devuelve 1
 */


int esNumeroPositivo(const char *cadena)
{
	if (*cadena == '\0')
	{
		return (0);
	}
	while (*cadena != '\0')
	{
		if (*cadena < '0' || *cadena > '9')
		{
			return (0);
		}
		cadena++;
	}
	return (1);
}
/**
 * main- suma dos argumentos
 * @argc: es un contador de argumentos
 * @argv: es el apuntador hacia el primer caracter de una matriz
 * Return: Devuelve 1
 */
int main(int argc, char *argv[])
{
	int i;
	int num1;
	int num2;

	char j[] = "Error";

	if (argc == 3)
	{
		if (esNumeroPositivo(argv[1]) && esNumeroPositivo(argv[2]))
		{
			num1 = atoi(argv[1]);
			num2 = atoi(argv[2]);
			i = num1 + num2;
			printf("%d\n", i);
		}
		else
		{
			printf("%s\n", j);
			return (1);
		}
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
