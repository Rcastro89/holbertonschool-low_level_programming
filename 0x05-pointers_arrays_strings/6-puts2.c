#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * puts2 - write only pars
 * @str: string to evaluate
 */
void puts2(char *str)
{
	int count, i, j;
	char temp[10000];

	count = strlen(str);
	j = 0;

	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
		{
			temp[j] = str[i];
			j++;
		}
	}
	puts(temp);
}
