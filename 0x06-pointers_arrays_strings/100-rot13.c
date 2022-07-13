#include "main.h"
/**
* rot13 - runs a basic cipher on input text
* @str: input string to be converted
* Return: the converted string
*/
char *rot13(char *str)
{
	int i, j;
	char var[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char conv[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; var[j] != '\0'; j++)
		{
			if (str[i] == var[j])
			{
				str[i] = conv[j];
				break;
			}
		}
	}

	return (str);
}
