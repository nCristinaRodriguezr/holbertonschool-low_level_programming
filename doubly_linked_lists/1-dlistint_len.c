#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * dlistint_len- Funcion que retorna los elemetos de una lista
 * @h: A la lista que el usurio desea imprimir
 * Return: Devuelve un contador de nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
