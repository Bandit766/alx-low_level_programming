#include "main.h"
#include <stdio.h>
/**
* print_number - prints out the input number
* @n: the input integer
*/
void print_number(int n)
{
	unsigned int i, j, digits = 0, copy, current, sum = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
		copy = n;
		if (copy % 10 == 0)
			digits++;
		while (copy > 0)
		{
			digits++;
			copy = copy / 10;
		}
		copy = n;
		i = digits - 1;
		while (sum != (unsigned int)(n))
		{
			current = n;
			sum = sum * 10;
			for (j = i; j > 0; j--)
			{
				current = current / 10;
			}
			_putchar('0' + (current - sum));
			sum += (current - sum);
			i--;
		}
	}
}
