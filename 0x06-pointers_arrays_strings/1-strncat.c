#include"main.h"
/**
* _strncat - concaten strings
* @dest: string destiny
* @src: string origin
* @n: bytes
* Return: (dest) success
*/
char *_strncat(char *dest, char *src, int n)
{
	long int i, j;

	i = 0, j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		if (j == n)
		{
			break;
		}
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
