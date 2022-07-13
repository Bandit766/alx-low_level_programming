#include "main.h"
/**
*_strcmp - compares 2 strings
* @s1: first string to be input
* @s2: second string to be input
* Return: returns the difference between s1 and s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (s1[i] == '\0' ||  s2[i] == '\0')
			break;
		if ((unsigned char)(s1[i]) != (unsigned char)(s2[i]))
			break;
		i++;
	}

	return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
}
