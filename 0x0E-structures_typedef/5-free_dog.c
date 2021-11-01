#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * free_dog - free memory allocate
 * @d: dog
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
