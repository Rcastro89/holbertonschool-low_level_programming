#include"main.h"
/**
* _strpbrk - compare chars
* @s: string evaluate
* @accept: caracter find
* Return: (result) success
*/
char *_strpbrk(char *s, char *accept)
{
	int leng = 0;
	int i, j;

	while (s[leng] != '\0')
	{
		leng++;
	}
	for (i = 0; i <= leng; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
