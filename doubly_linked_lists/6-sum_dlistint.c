#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * sum_dlistint - Funcion que suma todos los dato (n) de la lista
 * @head: A la lista que el usurio desea sumar
 * Return: Devuelve el resultado de la suma
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
