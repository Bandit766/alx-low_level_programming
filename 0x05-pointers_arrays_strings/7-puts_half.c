#include "main.h"

/**
 * puts_half - prints the second half of an input string
 *
 * @str: the input string
 *
 */

void puts_half(char *str)
{

	int i, l = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		l++;
	}

	for (i = (l / 2); i < l; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');

}
