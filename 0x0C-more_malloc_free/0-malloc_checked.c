#include<stdio.h>
#include"main.h"
#include <stdlib.h>
/**
 * malloc_checked - alloc memory
 * @b: integer sizeof
 * Return: (ma) success
 */
void *malloc_checked(unsigned int b)
{
	char *ma;

	ma = malloc(b + 1);
	if (ma == 0)
	exit(98);
	return (ma);
}
