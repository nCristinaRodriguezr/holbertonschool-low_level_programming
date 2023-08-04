#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * free_list- Funcion que libero una lista
 * @head: A la lista que el usuario desea liberar
 */
void free_list(list_t *head)
{
	list_t *h = head;
	list_t *next;

	while (h != NULL)
	{
		next = h->next;
		free(h->str);
		free(h);
		h = next;
	}
}

