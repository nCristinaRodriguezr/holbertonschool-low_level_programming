#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index- Funcion que añade un nuevo nodo
 * en la posicion dada.
 * @h: A la lista de nodos
 * @idx: indice o posicion dada donde se debe insertar el nuevo nodo
 * @n: valor que hay dentro del nodo
 * Return: Devuelve el nuevo nodo
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0 || *h == NULL)
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (count == idx)
		{
			new_node->prev = current->prev;
			new_node->next = current;
			current->prev->next = new_node;
			current->prev = new_node;
			return (new_node);
		}
		if (current->next ==  NULL)
		{
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		current = current->next;
		count++;
	}
	free(new_node);
	return (NULL);
}
