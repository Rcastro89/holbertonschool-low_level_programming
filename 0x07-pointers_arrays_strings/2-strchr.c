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
	int i, j;
	int count = 0;
	char *result;
	char temp[100];

	while (s[leng] != '\0')
	{
		leng++;
	}
	for (i = 0; i <= leng; i++)
	{
		if (s[i] == c)
		{
			count = leng - i;
			for (j = 0; j < count; j++)
			{
				temp[j] = s[i];
				i++;
			}
			result = temp;
			return (result);
		}
	}
	return ('\0');
}
