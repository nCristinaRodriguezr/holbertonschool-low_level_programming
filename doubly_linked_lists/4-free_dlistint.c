#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_dlistint - Funcion que añade que libera cada nodo de una lista
 * con doble vinculacion
 * @head: A la lista que el usurio desea liberar
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
