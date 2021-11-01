#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * print_dog - print data of dog
 * @d: struct
 */
void print_dog(struct dog *d)
{
	char *can_name = d->name;
	float can_age = d->age;
	char *can_owner = d->owner;

	if (d != 0)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
