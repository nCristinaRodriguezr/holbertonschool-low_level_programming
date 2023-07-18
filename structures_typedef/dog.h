#ifndef DOG_H
#define DOG_H
/**
 * struct dog- estructura que representa un perrito
 * @name: nombre del perrito
 * @age: edad del perrito
 * @owner: dueño del perrito
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
