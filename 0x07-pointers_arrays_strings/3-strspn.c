#include"main.h"
/**
* _strspn - count chars same
* @s: origin
* @accept: destiny
* Return: (count) success
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j;

	i = 0;
    count = 0;
	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
			return (count);
		i++;
	}
	return (count);
}
