#include "main.h"

/**
* _strncpy - copies the source string to the target destination
* @dest: destination string
* @src: source string
* @n: number of bytes written
* Return: the destination string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
