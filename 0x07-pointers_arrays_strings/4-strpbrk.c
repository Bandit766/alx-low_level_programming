#include "main.h"
#include <stddef.h>
/**
* _strpbrk - searches a string for any set of bytes
* @s: input string
* @accept: chars to find
* Return: pointer to the first coccurence of the string, null if none
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	if (s[0] == '\0' || accept[0] == '\0')
		return (NULL);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[i + j] == accept[j] ; j++)
		{
			if (accept[j] == '\0' && j != 0)
				return (&(s[i - j]));
		}
	}

	return (NULL);
}
