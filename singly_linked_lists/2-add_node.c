#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node- Funcion que añade un nuevo nodo al comienzo de una lista
 * @head: es un apuntador a la direccion donde esta guardo el apuntador head
 * @str: es la cadena que debe tener el nodo
 * Return: Devuelve el apuntador del nuevo nodo
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
