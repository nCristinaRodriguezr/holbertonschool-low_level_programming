#include <stdio.h>
#include "main.h"
/**
 * _strspn-obtiene la longitud de una subcadena de prefijo.
 * @s: apuntador
 * @accept: apuntador
 * Return: variable l
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int l = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				l++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			break;
		}
		i++;
	}
	return (l);
}
