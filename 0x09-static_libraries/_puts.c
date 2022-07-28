#include "main.h"
/**
* _puts_recursion - prints the input string followed by a new line
* @s: the input string
*
*
*/

void _puts(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts(s);
	}
	else
	{
		_putchar('\n');
	}
}
