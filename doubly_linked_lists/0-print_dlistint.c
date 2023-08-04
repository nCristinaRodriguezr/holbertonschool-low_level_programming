#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_dlistint - Funcion que imprime todos los elementos
 * de una lista doblemente vinculada
 * @h: A la lista que el usurio desea imprimir
 * Return: Devuelve un contador de nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		h = h->next;
		count++;
	}
	return (count);
}
