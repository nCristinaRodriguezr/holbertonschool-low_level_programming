#include <stdio.h>
#include "main.h"
/**
 * *_strstr-localiza una subcadena
 * @haystack: puntero 1
 * @needle: puntero 2
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (NULL);
}