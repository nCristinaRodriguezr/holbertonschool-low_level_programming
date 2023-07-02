#include <stdio.h>
#include "main.h"
/**
 * *leet-cambia todas las letras AEOTL y aeotl
 * en los numeros 43071 respectivamente
 * @str: variable 1
 * Return: devuelve str
 */
char *leet(char *str)
{
	char *ptr = str;
	char *letter = "AEOTL";
	char *numbers = "43071";

	while (*ptr)
	{
		for (int i = 0; letter[i]; i++)
		{
			if (*ptr == letter[i] || *ptr == letter[i] + 32)
			{
				*ptr = numbers[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
