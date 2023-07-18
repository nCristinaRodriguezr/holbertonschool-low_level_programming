#include <stdio.h>
#include "dog.h"
/**
 * init_dog- esta funsion inicializa una variable de tipo struct
 * @d: puntero
 * @name: puntero del nombre del perrito
 * @age: puntero edad del perrito
 * @owner: puntero dueño del perrito
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
