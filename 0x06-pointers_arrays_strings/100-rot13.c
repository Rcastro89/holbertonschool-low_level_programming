#include "main.h"
/**
* rot13 - change root13
* @a: array
* Return: (a) success
*/
char *rot13(char *a)
{
	int i, j, k;
	int ev[] = {78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
65 + 13, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 110,
111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122,
97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
	char ev2[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

	for (j = 0; a[j] != '\0'; j++)
	{
		for (i = 0; ev2[i] != '\0'; i++)
		{
			if (a[j] == ev2[i])
			{
				k = i;
				a[j] = ev[k];
				i = 52;
			}
		}
	}
	return (a);
}
