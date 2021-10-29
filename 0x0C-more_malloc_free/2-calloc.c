#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * _calloc - alloc array memory
 * @nmemb: integer array
 * @size: integer size
 * Return: (ma) success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ma;
	unsigned int cal, i;

	cal = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);

	ma = malloc(cal);
	if (ma == NULL)
		return (NULL);
	for (i = 0; i < cal; i++)
		ma[i] = 0;
	return (ma);
}
