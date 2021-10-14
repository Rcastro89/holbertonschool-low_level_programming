#include "main.h"
/**
* cap_string - change uppercase
* @a: array
* Return: (a) success
*/
char *cap_string(char *a)
{
	int i, j, temp;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		temp = a[j];
		/*if (temp == 9)
		{
			a[j] = ' ';
		}*/
		if (a[j] == ' ' || a[j] == '\n' || a[j] == ',' || a[j] == ';' ||
		a[j] == '.' || a[j] == '!' || a[j] == '\d' ||
		a[j] == '?' || a[j] == '\\' || a[j] == '(' ||
		a[j] == ')' || a[j] == '{' || a[j] == '}')
		{
			temp = a[j + 1];
			if (temp > 96 && temp < 122)
			{
				temp = temp - 32;
				a[j + 1] = temp;
			}

		}
	}
	return (a);
}
