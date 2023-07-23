#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main- imprimirá el resultado de la calculadora
 * @argc: es un contador de argumentos
 * @argv: es el apuntador hacia el primer caracter de una matriz
 * Return: Devuelve 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *s = argv[2];
	int (*f)(int, int);
	int result;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	f = get_op_func(s);
	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = f(num1, num2);
	printf("%d\n", result);
	return (0);
}
