#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
* _strchr - search for the target char
* @s: string to search
* @c: chat to search for
* Return: pointer to found char, otherwise NULL
*/

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
	}

	return (NULL);
}
