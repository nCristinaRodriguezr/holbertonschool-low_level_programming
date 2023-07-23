#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add- esta funsion suma dos enteros
 * @a: entero 1
 * @b: entero 2
 * Return: Devuelve el resultado
 */
int op_add(int a, int b)
{
	int result;

	result = a + b;
	return (result);
}
/**
 * op_sub- esta funsion resta dos enteros
 * @a: entero 1
 * @b: entero 2
 * Return: Devuelve el resultado
 */
int op_sub(int a, int b)
{
	int result;

	result = a - b;
	return (result);
}
/**
 * op_mul- esta funsion multiplica dos enteros
 * @a: entero 1
 * @b: entero 2
 * Return: Devuelve el resultado
 */
int op_mul(int a, int b)
{
	int result;

	result = a * b;
	return (result);
}
/**
 * op_div- esta funsion divide dos enteros
 * @a: entero 1
 * @b: entero 2
 * Return: Devuelve el resultado
 */
int op_div(int a, int b)
{
	 int result;
	
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a / b;
	return (result);
}
/**
 * op_mod- esta funsion saca el modulo dos enteros
 * @a: entero 1
 * @b: entero 2
 * Return: Devuelve el resultado
 */
int op_mod(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = a % b;
	return (result);
}
