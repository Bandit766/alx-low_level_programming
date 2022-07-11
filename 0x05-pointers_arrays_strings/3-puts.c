#include "main.h"

/**
* _puts - takes input string and output to stdout
*
* @str: input string to be output
*
*/


void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
