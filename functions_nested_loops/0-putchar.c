#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main- imprimirá _putchar
 * Return: siempre devuelve 0
 */
int main(void)
{
	char c[] = "_putchar\n";
	int i = 0;
		while (c[i] != '\0')
		{
			write(1, &c[i], 1);
			i++;
		}
	return (0);
}
