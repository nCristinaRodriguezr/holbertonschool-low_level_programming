#include <stdlib.h>
#include "dog.h"
/**
 * free_dog- esta funsion hace la liberacion de memoria
 * de el nombre del perro del dueño y el puntero d.
 * @d: puntero
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
