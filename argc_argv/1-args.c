#include <stdio.h>
#include "main.h"
#pragma unused(argv)
/**
 * main- imprimirá el numero de argumentos
 * @argc: es un contador de argumentos
 * @argv: es el apuntador a una matriz
 * Return: Devuelve 0
 */
int main(int argc, char *argv[])
{
	if (argv)
	{
		printf("%d\n", argc);
	}
	return (0);
}
