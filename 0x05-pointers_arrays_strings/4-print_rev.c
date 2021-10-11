#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * print_rev - write letters rev
 * @s: string to evaluate
 */
void print_rev(char *s)
{
	int left, right;
	int count, i;
	char temp[100];
	char j;

	count = strlen(s);

	for (i = 0; i < count; i++)
	{
		temp[i] = s[i];
	}
	for (left = 0, right = count - 1; left < (count / 2); left++, right--)
	{
		j = temp[left];
		temp[left] = temp[right];
		temp[right] = j;
	}
	puts(temp);
}
