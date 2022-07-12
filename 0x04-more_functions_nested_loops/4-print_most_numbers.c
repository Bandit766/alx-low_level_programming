#include "main.h"

/**
*print_most_numbers - prints numbers 0 through 9 except for 2 and 4
*
*
*
*
*/

void print_most_numbers(void)
{
	int i, temp;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;

		if (i == 0)
			temp = '0';
		else
			temp = '0' + i;

		_putchar(temp);
	}
	_putchar('\n');
}
