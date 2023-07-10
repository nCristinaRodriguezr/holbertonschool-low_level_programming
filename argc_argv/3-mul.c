#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main- multiplica dos argumentos
 * @argc: es un contador de argumentos
 * @argv: es el apuntador hacia el primer caracter de una matriz
 * Return: Devuelve 1
 */
int main(int argc, char *argv[])
{
	int i;
	int num1;
	int num2;

	char j[] = "error";

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		i = num1 * num2;
		printf("%d\n", i);
	}
	else
	{
		printf("%s\n", j);
	}
	return (1);
}
