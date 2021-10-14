#include"main.h"
#include<string.h>
/**
* _strcat - concaten strings
* @dest: string destiny
* @src: string origin
* Return: (dest) success
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0, j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
