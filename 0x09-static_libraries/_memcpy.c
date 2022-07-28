#include "main.h"

/**
* _memcpy - copies n bytes from src to dest
* @dest: destination string
* @src: source string
* @n: number of chars to copy
* Return: destination string
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
