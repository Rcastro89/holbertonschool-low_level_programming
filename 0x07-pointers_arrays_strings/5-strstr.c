#include"main.h"
/**
* _strstr - compare chars
* @haystack: string evaluate
* @needle: caracter find
* Return: (result) success
*/
char *_strstr(char *haystack, char *needle)
{
	int leng = 0;
	int i, j;

	while (needle[leng] != '\0')
	{
		leng++;
	}
	for (i = 0; i <= leng; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
				return (needle + i);
		}
	}
	return ('\0');
}
