#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "main.h"
/**
 * _atoi - convert string to number
 * @s: strint evaluate
 * Return: (0)
 */
int _atoi(char *s)
{
	unsigned int a;
	int i, j;

	a = 0;
	j = 1;
	for (i = 0; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			a = (a * 10) + ((int)s[i] - 48);
			if (s[i + 1] < '0' || s[i + 1] > '9')
			break;
			}
			if (s[i] == '-')
			j = j * -1;
	}
	return (a * j);
}
