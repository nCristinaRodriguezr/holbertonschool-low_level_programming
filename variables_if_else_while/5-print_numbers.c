#include <stdlib.h>
#include <stdio.h>
/**
 * main- imprimira numeros de un solo digito en base 10
 * Return: siempre devuelve 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		printf("%d", i);
	printf("\n");
	return (0);
}
