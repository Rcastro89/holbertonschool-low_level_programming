#ifndef DOG_H
#define DOG_H
/**
 * struct dog - data of can
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} can;


can *my_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
