#include "dog.h"

/**
 * init_dog - init dog
 *
 * @d: struct of the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

d->age = age;
d->name = name;
d->owner = owner;

}
