#include "main.h"

/**
 * puts_half - prints the second half of an input string
 *
 * @str: the input string
 *
 */

void puts_half(char *str)
{

	int i, l = 0, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}

	if (l % 2 == 1)
	{
		j = (l - 1) / 2;
	}
	else
	{
		j = (l / 2);
	}

	for (i = j; i < l; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
