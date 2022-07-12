#include "main.h"

/**
* more_numbers - prints numbers 0 to 14 - 10 times
*
*
*
*/

void more_numbers(void)
{
	int i, j;
	char c = '0';
		
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			if (j != 0)
			{
				c += j;
			}
			_putchar(c);
	
		}
		_putchar('\n');
	}
}
