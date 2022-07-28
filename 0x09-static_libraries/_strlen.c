#include "main.h"
/**
* _strlen - returns the length of a string
*
* @s: input variable, pointer to start of the string array
*
*  Return: length of the input string
*/



int _strlen(char *s)
{
	int l = 0, i = 0;

	while (s[i] != '\0')
	{
	l++;
	i++;
	}

	return (l);
}
