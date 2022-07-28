#include "main.h"

/**
 * _isalpha - check if alphabetic character
 *
 * @c : letter being checked
 * Return: If lowercase 0 (Success)
 */


int _isalpha(int c)

{
	char ch;
	char ch1;
	int isalpha = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
		isalpha = 1;
		break;
		}
	}
	if (isalpha == 0)
	{
		for (ch1 = 'A'; ch1 <= 'Z'; ch1++)
		{
			if (c == ch1)
			{
				isalpha = 1;
				break;
			}

		}
	}
	return (isalpha);
}
