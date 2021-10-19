#include"main.h"
/**
* _strchr - compare chars
* @s: string evaluate
* @c: caracter find
* Return: (result) success
*/
char *_strchr(char *s, char c)
{
	int leng = 0;
	int i;

	while (s[leng] != '\0')
	{
		leng++;
	}
	for (i = 0; i <= leng; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
