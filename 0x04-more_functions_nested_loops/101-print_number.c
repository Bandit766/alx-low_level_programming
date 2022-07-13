#include "main.h"
#include <stdio.h>
/**
* print_number - prints out the input number
* @n: the input integer
*/
void print_number(int n)
{
	int i, j, digits = 0, copy, current, sum = 0;

	if (n == 0)
		_putchar('0');
	else
	{
		copy = n;
		if (n < 0)
		{
			_putchar('-');
			copy = -n;
			n = -n;
		}
		if (copy % 10 == 0)
			digits++;
		while (copy > 0)
		{
			digits++;
			copy = copy / 10;
		}
		copy = n;
		i = digits - 1;
		while (1)
		{
			copy = n;
			current = copy;
			for (j = i; j > 0; j--)
			{
				current = current / 10;
			}
			sum = sum * 10;
			if (sum == n)
			{
				_putchar('0' + (current % 10));
				break;
			}
			else
			{
				_putchar('0' + (current - sum));
				sum += (current - sum);
				if (sum == n)
					break;
			}
			i--;
		}
	}
}
