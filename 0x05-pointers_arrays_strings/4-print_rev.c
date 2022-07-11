#include "main.h"

/**
* print_rev - prints the input string in reverse
*
* @s: input string
*
*/

void print_rev(char *s)
{
	int l = 0, i = 0;

	while (s[i] != '\0')
	{
		l++;
		i++;
	}
	for (i = l; i > 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
