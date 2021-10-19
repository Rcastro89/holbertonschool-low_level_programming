#include"main.h"
#include<stdio.h>
#include<string.h>
/**
* _strstr - compare chars
* @haystack: string evaluate
* @needle: caracter find
* Return: (result) success
*/
char *_strstr(char *haystack, char *needle)
{
	int leng = 0;
	int i, j, k, l;

	while (needle[leng] != '\0')
	{
		leng++;
	}
	for (i = 0; i <= leng; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				l = j + 1;
				for (k = i + 1; k < (leng - i); k++)
				{
					if (needle[k] == haystack[l])
					{
						l++;
						if (needle[k + 1] == '\0')
						{
							return (haystack + j);
						}
					} else
					{
						break;
					}
				}
			}
		}
	}
	return (0);
}
