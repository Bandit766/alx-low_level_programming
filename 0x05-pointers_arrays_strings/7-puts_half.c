#include "main.h"

/**
 * puts_half - prints the second half of an input string
 *
 * @str: the input string
 *
 */

void puts_half(char *str)
{

	int i, k, l = 0, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}

	k = l;

	if (k  % 2 == 1)
	{
		k--;
	}

	j = (k / 2);

	for (i = j; i < l; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
