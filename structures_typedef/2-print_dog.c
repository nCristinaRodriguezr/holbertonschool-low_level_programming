#include <stdio.h>
#include "dog.h"
/**
 * print_dog- imprime la estructura dog
 * @d: puntero
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Nombre: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Edad: %f\n", d->age);
	printf("Dueño: %s\n", d->owner != NULL ? d->owner : "(nil)");
}
