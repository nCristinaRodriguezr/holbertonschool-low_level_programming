#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - Funcion que imprime todos los elementos de una lista
 * @h: A la lista que el usurio desea imprimir
 * Return: Devuelve un contador de nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
