#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"
/**
 * add_dnodeint_end - Esta funcion crea un nuevo nodo al final de la lista
 * @head: Puntero a la lista que el usuario desea imprimir
 * @n: es un numero que esta dentro del nodo
 * Return: Devuelve el nuevo nodo
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *last_node = *head;

		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
		new_node->prev = last_node;
	}
	return (new_node);
}
