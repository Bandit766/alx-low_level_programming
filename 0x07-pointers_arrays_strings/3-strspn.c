#include "main.h"
/**
* _strspn - checks how many bytes of the prefix of s matches accept
* @s: string to check
* @accept: the chars to compare to the main string
* Return: the number of matching bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, l = 0;
	int nomatch;

	for (i = 0; s[i] != '\0'; i++)
	{
		nomatch = 1;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				nomatch = 0;
				l++;
			}

		}
		if (nomatch == 1)
			break;
	}
	return (l);
}
