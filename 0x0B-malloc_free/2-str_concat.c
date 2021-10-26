#include"main.h"
#include<stdlib.h>
/**
 * str_concat - concatenate string whit reserve malloc
 * @s1: first string
 * @s2: second string
 * Return: () pointer created
*/
char *str_concat(char *s1, char *s2)
{
	char *ma;
	int s1i = 0, s2j = 0, i, j;

	if (s1 == NULL && s2 == NULL)
	return (NULL);
	while (s1[s1i] != '\0')
	s1i++;
	while (s2[s2j] != '\0')
	s2j++;
	ma = malloc(s1i + s2j + 1);
	if (ma == 0)
	return (NULL);
	for (i = 0; i < s1i; i++)
	ma[i] = s1[i];
	for (j = 0; j < s2j; j++)
	{
		ma[i] = s2[j];
		i++;
	}
	return (ma);
}
