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
	int result = 0;
	int num1;

	char j[] = "Error";

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (esNumeroPositivo(argv[i]))
		{
			num1 = atoi(argv[i]);
			result = result + num1;
		}
		else
		{
			printf("%s\n", j);
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}
