#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * rev_string-imprime una cadena, al revés
 * @s: variable de entrada
 */
void rev_string(char *s)
{
	int length = strlen(s);

	int start = 0;

	int end = length - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];

		s[end] = temp;

		start++;
		end--;
	}
}
