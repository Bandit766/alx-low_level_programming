#include "main.h"

/**
* print_line - prints a line out n times followed by a new line
*
* @n: the number of times to print the line
*
*
*/

void print_line(int n)
{

	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');

}
