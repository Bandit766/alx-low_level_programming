#include "main.h"
#include <stdio.h>
/**
*_strcat - concatenates 2 strings
* @dest: destination string
* @src: source string
* Return: the concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int i, j, sl = 0, dl = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		sl++;
	}

	for (i = 0; dest[i] != '\0'; i++)
	{
		dl++;
	}

	j = 0;
	for (i = dl; i <= (dl + sl - 1); i++)
	{
		dest[i] = src[j];
		j++;
	}

	return (dest);

}
