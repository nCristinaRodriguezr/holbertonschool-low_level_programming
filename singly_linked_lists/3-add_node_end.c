#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end- Funcion que añade un nuevo nodo al final de la lista
 * @head: A la lista que el usurio desea imprimir
 * @str: apuntador a una cadena
 * Return: Devuelve el nuevo nodo
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *h;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		h = *head;
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = new_node;
	}
	return (new_node);
}
