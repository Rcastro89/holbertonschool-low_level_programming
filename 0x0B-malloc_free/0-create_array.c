#include"main.h"
#include<stdlib.h>
/**
 * create_array - array new
 * @size: integer
 * @c: char asigned
 * Return: () matriz created
*/
char *create_array(unsigned int size, char c)
{
	char *ma;
	unsigned int i;

	if (size == 0)
	return (NULL);
	ma = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		ma[i] = c;
	}
	return (ma);
}
