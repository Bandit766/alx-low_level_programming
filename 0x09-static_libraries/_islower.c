#include "main.h"

/**
 * _islower - Entry point
 *
 * @c : letter being checked
 * Return: If lowercase 0 (Success)
 */


int _islower(int c)

{
	char ch;
	int islow = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
		islow = 1;
		break;
		}
	}

	return (islow);
}
