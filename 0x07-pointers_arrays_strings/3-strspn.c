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
	int j, k;
	int count = 0;

	i = 0;
	while (accept[i] != '\0')
	{
		k = 0;
		j = 0;
		while (s[j] != '\0')
		{
			if (accept[i] == s[j])
			{
				count++;
				k = 1;
				break;
			}
			j++;
		}
		if (k == 0)
		{
			return (count);
		}
		i++;
	}
	return (0);
}
