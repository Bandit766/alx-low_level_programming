#include "main.h"

/**
* leet - improves the input string
* @str: input string to be converted
* Return: the converted string
*/
char *leet(char *str)
{
	int i, j;
	char var[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char conv[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; var[j] != '\0'; j++)
		{
			if (str[i] == var[j] || str[i] == var[j] - 32)
			{
				str[i] = conv[j];
				break;
			}
		}
	}

	return (str);
}
