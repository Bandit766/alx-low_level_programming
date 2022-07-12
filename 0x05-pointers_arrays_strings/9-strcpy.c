#include "main.h"

/**
* _strcpy - copies the input string into the target buffer
*
* @dest: destination buffer
* @src: source string
* Return: destination buffer
*/

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
