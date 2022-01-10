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
	unsigned int count = 0;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[i] == '\0')
		{
			return (count);
		}
		i++;
	}
	return (count);
}
