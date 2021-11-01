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
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", can_age, can_owner);
		else if (d->owner == NULL)
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", can_name, can_age);
		else if (d->age < 0)
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", can_name, can_owner);
		else
			printf("Name: %s\nAge: %f\nOwner: %s\n", can_name, can_age, can_owner);
	}
}
