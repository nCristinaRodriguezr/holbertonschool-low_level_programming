#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * *malloc_checked- asigna memoria usando malloc
 * @b: variable 1
 * Return: puntero ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		_exit(98);
	}
	return (ptr);
}
