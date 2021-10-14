#include "main.h"
/**
* leet - 1337
* @a: array
* Return: (a) success
*/
char *leet(char *a)
{
	int i, j, k;
	int ev[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	char ev2[] = {"aAeEoOtTlL"};


	for (j = 0; a[j] != '\0'; j++)
	{
		for (i = 0; ev2[i] != '\0'; i++)
		{
			if (a[j] == ev2[i])
			{
				k = i;
				a[j] = ev[k];
				i = 10;
			}
		}
	}
	return (a);
}
