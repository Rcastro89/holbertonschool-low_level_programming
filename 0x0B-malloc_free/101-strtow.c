#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * heigth - count words
 * @str: string evaluate
 * @len: lengedt of str
 * Return: (i) success
 */
int heigth(char *str, int len)
{
	int j, i, k;

	if (*str == 32)
		return (0);
	for (j = 0; j < len; j++)
	{
		if (str[j] != 32)
		{
			i++;
			for (k = 0; str[j] != 32; k++)
				j++;
		}
	}
	return (i);
}

/**
 * strtow - string word x word
 * @str: string evaluate
 * Return: (ma) success
 */
char **strtow(char *str)
{
	char **ma = NULL;
	int i = 0, j, k, len = 0, l = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	i = heigth(str, len);
	if (i == 0)
		return (NULL);
	ma = (char **) malloc(sizeof(char) * i);
	i = 0;
	for (j = 0; j < len; j++)
	{
		if (str[j] != 32)
		{
			for (k = 0; str[j] != 32; k++)
				j++;
			ma[i] = (char *) malloc(sizeof(char) * k);
			i++;
		}
	}
	for (j = 0; j < len; j++)
	{
		if (str[j] != 32)
		{
			for (k = 0; str[j] != 32; k++, j++)
				ma[l][k] = str[j];
			ma[l][k + 1] = '\0';
			l++;
		}
	}
	ma[l] = '\0';
	return (ma);
}
