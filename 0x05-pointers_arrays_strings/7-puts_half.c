#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * puts_half - write only half
 * @str: string to evaluate
 */
void puts_half(char *str)
{
	int count, i, j;
	char temp[10000];

	count = strlen(str);
	j = 0;

	if (count % 2 == 0)
	{
		for (i = count; i > (count / 2); i--)
		{
			temp[j] = str[((count / 2) + j)];
			j++;
		}
	} else
	{
		for (i = count; i > ((count + 1) / 2); i--)
		{
			temp[j] = str[((count / 2) + j)];
			j++;
		}
	}
	puts(temp);
}
