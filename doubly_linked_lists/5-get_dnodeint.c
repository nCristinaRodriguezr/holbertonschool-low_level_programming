#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - Funcion que devuelve el numero de nodos de una
 * lista de doble vinculacion
 * @head: A la lista de nodos
 * @index: indice
 * Return: numero de nodos
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (count == index)
	{
		return (current);
	}
	else
	{
		return (NULL);
	}
}
