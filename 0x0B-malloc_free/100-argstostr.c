#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * argstostr - string word x word
 * @ac: count words
 * @av: string evaluate
 * Return: (ma) success
 */

char *argstostr(int ac, char **av)
{
	char *ma;
	int i, j;
	int len = 0, x = 0;

	if (ac == 0 || av == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}
	len = len + ac;
	ma = malloc(len);

	if (ma == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ma[x] = av[i][j];
			x++;
		}
		ma[x] = '\n';
		x++;
	}
	ma[x] = '\0';
	return (ma);
}
