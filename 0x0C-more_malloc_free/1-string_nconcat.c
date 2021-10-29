#include"main.h"
#include<stdlib.h>
/**
 * cuentacadena2 - count the length of the string
 * @cad: string
 * @n: length comparate
 * Return: (cpy) success
*/
int cuentacadena2(char *cad, unsigned int n)
{
	unsigned int len = 0, cpy = 0;

	while (cad[len] != '\0')
		len++;
	if (n >= len)
	{
		cpy = len;
	} else
	{
		cpy = n;
	}
	return (cpy);
}
/**
 * cuentacadena1 - count the length of the string
 * @cad: string
 * Return: (len) success
*/
unsigned int cuentacadena1(char *cad)
{
	unsigned int len = 0;

	while (cad[len] != '\0')
		len++;
	return (len);
}
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
	unsigned int s1i = 0, s2j = 0, i, j;

	ma = malloc(s1i + s2j + 1);
	if (ma == 0)
	return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s2j = cuentacadena2(s2, n);
	s1i = cuentacadena1(s1);
	ma = malloc(sizeof(char) * (s1i + s2j) + 1);
	if (ma == NULL)
		return (NULL);
	for (i = 0; i < s1i; i++)
		ma[i] = s1[i];
	for (j = 0; j < s2j; j++, i++)
		ma[i] = s2[j];
	ma[i] = '\0';
	return (ma);
}
