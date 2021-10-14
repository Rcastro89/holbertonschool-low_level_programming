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
		if (temp == 9 || temp == 10 || temp == 32 || temp == 33 ||
		temp == 34 || temp == 40 ||
		temp == 41 || temp == 44 || temp == 46 || temp == 59 ||
		temp == 63 || temp == 123 || temp == 125)
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
