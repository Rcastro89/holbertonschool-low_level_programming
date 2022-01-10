#include "main.h"
/**
* _strcmp - count string
* @s1: destiny
* @s2: origin
* Return: (s1 -s2) success
*/
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

