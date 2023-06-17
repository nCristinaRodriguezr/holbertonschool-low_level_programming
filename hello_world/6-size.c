#include <stdio.h>
/**
 * main - Para imprimir el tamaño de varios tipos en C
 * Return: siempre devuelve 0
 */
int main(void)
	{
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of double: %lu bytes\n", sizeof(double));
	printf("Size of long: %lu bytes\n", sizeof(long));
	printf("Size of long long: %lu bytes\n", sizeof(long long));
	return (0);
	}
