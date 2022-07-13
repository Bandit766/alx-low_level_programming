#include "main.h"
/**
 *cap_string - first letter of words to upper case
 *@str: input string
 *Return: the modified string
 */
char *cap_string(char *str)
	{
		char vals[] = { ' ', '\t', '\n', ',', ';', '.'
			, '!', '\?', '\"', '(', ')', '{', '}', '\0' };
		int i, j, increment;
		char k;

		for (i = 0; str[i] != '\0'; i++)
		{
			if (i == 0)
			{
				for (k = 'a'; k <= 'z'; k++)
				{
					if (str[i] == k)
						str[i] -= 32;
				}
			}
			for (j = 0; vals[j] != '\0'; j++)
			{
				if (str[i] == vals[j])
				{
				for (k = 'a'; k <= 'z'; k++)
				{
					if (str[i + 1] == k)
					{
						increment = 1;
						str[i + 1] -= 32;
						break;
					}
				}
				}
				if (increment)
				{
					increment = 0;
					i++;
					break;
				}
			}
		}
		return (str);
	}
