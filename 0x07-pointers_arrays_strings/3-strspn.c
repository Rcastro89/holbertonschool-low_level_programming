#include"main.h"
/**
* _strspn - count chars same
* @s: origin
* @accept: destiny
* Return: (count) success
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count = 0;

	i = 0;
	while (accept[i] != '\0')
	{
		j = 0;
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				count++;
				break;
			}
			j++;
		}
		i++;
	}
	return (count + 1);
}
