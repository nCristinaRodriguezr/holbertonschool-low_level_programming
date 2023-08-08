#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index- Funcion que borra nodos en la posicion
 * que indica el index
 * @head: A la lista de nodos
 * @index: indice o posicion dada donde se debe borrar el nodo
 * Return: Devuelve -1 en cado de no encontrar el nodo en la posicion index
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (count == index)
		{
			if (current->next != NULL)
			{
				current->next->prev = current->prev;
			}
			if (current->prev != NULL)
			{
				current->prev->next = current->next;
			}
			free(current);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}

