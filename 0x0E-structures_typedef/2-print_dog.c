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
			printf("Name: %s\n", can_name);
		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", can_age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", can_owner);
	}
}
