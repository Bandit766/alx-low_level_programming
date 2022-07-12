#include "main.h"

/**
* _isupper - checks if input is upper case
*
* @c: input char
*
* Return: 1 if true, 0 if not
*
*/

int _isupper(int c)
{
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
