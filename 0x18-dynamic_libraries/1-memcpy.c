#include"main.h"
/**
* _memcpy - copy memory
* @src: array origin
* @dest: array dest
* @n: numbers
* Return: (dest) success
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
