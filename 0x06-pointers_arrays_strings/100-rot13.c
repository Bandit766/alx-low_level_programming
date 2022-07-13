#include "main.h"
/**
* leet - runs a basic cipher
* @str: input string to be converted
* Return: the converted string
*/
char *rot13(char *str)
{
	int i, j;
	char var[27] = "abcdefghijklmnopqrstuvwxyz";
	char conv[27] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; var[j] != '\0'; j++)
		{
			if (str[i] == var[j])
			{
				str[i] = conv[j];
				break;
			}
			if (str[i] == var[j] - 32)
			{
				str[i] = conv[j] - 32;
				break;
			}
		}
	}

	return (str);
}
