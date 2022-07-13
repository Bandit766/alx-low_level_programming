#include "main.h"

/**
* string_toupper - converts input string to uppercase
* @str: input string
* Return: converted string
*/

char *string_toupper(char *str)
{
	int i;
	char a;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			if (str[i] == a)
				str[i] = a - 32;
		}
	}

	return (str);
}
