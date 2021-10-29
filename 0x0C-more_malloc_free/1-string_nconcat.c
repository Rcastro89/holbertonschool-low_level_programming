#include"main.h"
#include<stdlib.h>
/**
 * string_nconcat - concatenate string whit reserve malloc
 * @s1: first string
 * @s2: second string
 * @n: max chars the second string
 * Return: () pointer created
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ma;
	unsigned int i = 0, j = 0, cpy, x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s2[i] != '\0')
		i++;
	if (n >= i)
	{
		cpy = i;
	} else
	{
		cpy = n;
	}
	while (s1[j] != '\0')
		j++;
	ma = malloc(sizeof(char) * (j + cpy) + 1);
	if (ma == NULL)
		return (NULL);
	for (; s1[x] != '\0'; x++)
		ma[x] = s1[x];
	for (; y < cpy; y++, x++)
		ma[x] = s2[y];
	ma[x] = '\0';
	return (ma);
}
