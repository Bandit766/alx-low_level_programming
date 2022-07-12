#include "main.h"

/**
*print_numbers - prints numbers 1 through 9
*
*/

void print_numbers(void)
{
	int i, temp;

	for (i = 0; i < 10; i++)
	{
		if (i == 0)
			temp = '0';
		else
			temp = '0' + i;

		_putchar(temp);
	}
	_putchar('\n');
}
