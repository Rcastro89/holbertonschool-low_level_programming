#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * rev_string - write letters rev
 * @s: string to evaluate
 */
void rev_string(char *s)
{
	char tmp;
	int i, len1, count;

	len1 = 0;

	count = strlen(s);

	len1 = count - 1;

	for (i = 0; i < count / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
