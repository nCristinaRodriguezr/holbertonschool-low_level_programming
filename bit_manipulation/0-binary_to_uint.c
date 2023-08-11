#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Funcion que pasa un numero binario a decimal
 * @b: puntero que apunta a una cadena de nuemeros binarios
 * Return: Devuelve el resultado en decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int bit;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			bit = 0;
		}
		else if (b[i] == '1')
		{
			bit = 1;
		}
		else
		{
			return (0);
		}
		result = (result << 1) | bit;
	}
	return (result);
}

