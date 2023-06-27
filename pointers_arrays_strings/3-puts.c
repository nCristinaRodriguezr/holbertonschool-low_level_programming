#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _puts-verifica un digito de 0 a 9
 * @str: variable de entrada
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
