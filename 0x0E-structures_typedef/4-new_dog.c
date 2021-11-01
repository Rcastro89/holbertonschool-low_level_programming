#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * new_dog - add new can
 * @name: name dog
 * @age: dog's age
 * @owner: dog amos
 * Return: (can) success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *can;
	int lenname, i, lenowner;
	char *name1, *owner1;

	if (name == NULL || owner == NULL)
		return (NULL);
	can = malloc(sizeof(dog_t));
	if (can == 0)
		return (NULL);
	for (lenname = 0; name[lenname] != '\0'; lenname++)
		;
	for (lenowner = 0; name[lenowner] != '\0'; lenowner++)
		;
	name1 = malloc(sizeof(char) * (lenname + 1));
	if (name1 == NULL)
	{
		free(can);
		return (NULL);
	}
	owner1 = malloc(sizeof(char) * (lenowner + 1));
	if (owner1 == NULL)
	{
		free(can);
		free(name1);
		return (NULL);
	}
	for (i = 0; i <= lenname; i++)
		name1[i] = name[i];
	name1[i] = '\0';
	for (i = 0; i <= lenowner; i++)
		owner1[i] = owner[i];
	owner1[i] = '\0';
	can->age = age;
	can->name = name1;
	can->owner = owner1;
	return (can);
}
