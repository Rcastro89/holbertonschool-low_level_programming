#include<stdio.h>
#include<stdlib.h>
#include"main.h"
/**
 * heigth - count words
 * @cad: string evaluate
 * @largo: lengedt of str
 * Return: (i) success
 */
int heigth(char *cad, int largo)
{
	int a;
	int b = 0;
	int c;

	for (a = 0; a < largo; a++)
	{
		if (cad[a] != 32)
		{
			b++;
			for (c = 0; cad[a] != 32; c++)
			{
				if (cad[a] == '\0')
					break;
				a++;
			}
		}
	}
	return (b);
}

/**
 * strtow - string word x word
 * @str: string evaluate
 * Return: (ma) success
 */
char **strtow(char *str)
{
	char **ma;
	unsigned int i = 0, j, k, len = 0, m = 0, t, y, u;

	while (str[len] != '\0')
		len++;
	if (str == NULL || len == 0 || len == 1)
		return (NULL);
	i = heigth(str, len);
	if (i == 0)
		return (NULL);
	ma = (char **) malloc(sizeof(char *) * i + 2);
	for (m = 0, j = 0; j < len; j++)
	{
		if (str[j] != 32 && str[j] != '\0')
		{
			for (k = 0; str[j] != 32; k++, j++)
			{
				if (str[j] == '\0')
					break;
			}
			ma[m] = (char *) malloc(sizeof(char) * k + 1);
			m++;
		}
	}
	for (y = 0, t = 0; t < len; t++)
	{
		if (str[t] != 32 && str[t] != '\0')
		{
			for (u = 0; str[t] != 32; u++)
			{
				if (str[t] == '\0')
					break;
				ma[y][u] = str[t];
				t++;
			}
			y++;
		}
	}
	ma[y] = '\0';
	return (ma);
}
