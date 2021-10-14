#include "main.h"
/**
* string_toupper - change uppercase
* @a: array
* Return: (a) success
*/
char *string_toupper(char *a)
{
	int i, j;
	char temp;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		temp = a[j];
		if (temp > 96 && temp < 122)
		{
			temp = temp - 32;
			a[j] = temp;
		}
	}
	return (a);
}
