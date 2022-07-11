#include "main.h"
/**
* rev_string - reverses the input string
*
* @s: input string
*
*/

void rev_string(char *s)
{
	int l = 0, i = 0, j = 0;
	char str[500];

	for (i = 0; s[i] != '\0'; i++)
	{
		str[i] = s[i];
		l++;
	}


	for (i = l - 1; i >= 0; i--)
	{
		s[j] = str[i];
		j++;
	}
}
