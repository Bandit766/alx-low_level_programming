#include "main.h"

/**
* _print_rev_recursion - print the reverse of the input string
* @s: input string
*
*/

void _print_rev_recursion(char *s)
{
	if (*(s + 1) != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	
}
