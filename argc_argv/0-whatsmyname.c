#include <stdio.h>
#include "main.h"
/**
 * main- imprimirá el nombre del programa
 * @argc: es un contador de argumentos
 * @argv: es el apuntador hacia el primer caracter de una matriz
 * Return: Devuelve 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
