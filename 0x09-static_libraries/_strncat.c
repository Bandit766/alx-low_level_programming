#include "main.h"
#include <stdio.h>
/**
*_strncat - concatenates 2 strings
* @dest: destination string
* @src: source string
* @n: number of bytes to concat to new string
* Return: the concatenated string
*/

char *_strncat(char *dest, char *src, int n)
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
	if (n > 0)
	{
		for (i = dl; i <= (dl + sl - 1) && i < dl + n; i++)
		{
			dest[i] = src[j];
			j++;
		}
		if (n > (sl + dl - 1))
		{
			dest[i] = '\0';
		}
	}
	return (dest);

}
