#include "main.h"

/**
*_isdigit - checks if input is a digit from 0 - 9
*
* @c: input value to be checked
* Return: 1 if true, 0 if false
*/

int _isdigit(int c)
{
	int i;

	c = c - '0';

	for (i = 0; i < 10; i++)
	{
		if (c == i)
			return (1);

	}

	return (0);
}
