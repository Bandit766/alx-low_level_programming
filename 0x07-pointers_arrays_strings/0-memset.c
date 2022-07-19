#include "main.h"

/**
* _memset - sets the n number of bytes in string s to b
* @s: pointer to string
* @b: char to be insterted
* @n: number of chars to be inserted
* Return: returns the modified string
*/

char *_memset(char *s, char b, unsigned int n)

{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}



	return (s);
}
