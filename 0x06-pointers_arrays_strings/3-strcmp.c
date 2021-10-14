#include "main.h"
/**
* _strcmp - count string
* @s1: destiny
* @s2: origin
* Return: (s1 -s2) success
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}
	return (s1 - s2);
}

