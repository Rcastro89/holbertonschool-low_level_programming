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
	int tamanocorto = 0;
	char *temp = "NULL";
	int i = 0;
	int j = 0;
	int k, l;

	while (needle[tamanocorto] != '\0')
	{
		tamanocorto++;
	}
	if (tamanocorto != 0)
	{
	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			k = j + 1;
			l = i + 1;
			for (; needle[k] != '\0';k++, l++)
			{
				if (needle[k] == haystack[l])
				{
					temp = (haystack + i);
				} else
				{
					temp = "NULL";
					i++;
					break;
				}
			}
		} 
		i++;
	}}
	return (temp);
}
