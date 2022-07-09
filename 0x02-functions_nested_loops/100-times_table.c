#include "main.h"

/**
* print_times_table - print the n times table starting with 0
*
* @n : which times table to produce
*/

void print_times_table(int n)
{
int i, j, calc;

if (n < 15 && n >= 0)
{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			calc = i * j;
			if (calc <= 9)
			{
				if (j != 0)
				{
					_putchar (',');
					_putchar (' ');
					_putchar (' ');
					_putchar (' ');
				}
				_putchar('0' + calc);
			}
			else if (calc > 99)
			{
				_putchar (',');
				_putchar (' ');
				_putchar ('0' + (calc / 100));
				_putchar ('0' + ((calc / 10) % 10));
				_putchar ('0' + (calc % 10));
			}
			else
			{
				_putchar (',');
				_putchar (' ');
				_putchar (' ');
				_putchar ('0' + (calc / 10));
				_putchar ('0' + (calc % 10));
			}
		}
		_putchar('\n');
	}
}
}

