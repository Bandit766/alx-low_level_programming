#include "main.h"
#include <stddef.h>
/**
* _strstr - finds string needle in string haystack
* @haystack: string to search
* @needle: phrase to be found
* Return: returns NULL if none, otherwise pointer to start of found string
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	if (haystack[0] == '\0' || needle[0] == '\0')
		return (NULL);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; haystack[i + j] != '\0'; j++)
		{
			if (needle[j] == '\0')
			{
				return (&(haystack[i - j]));
			}
		}
	}

	return (NULL);
}
