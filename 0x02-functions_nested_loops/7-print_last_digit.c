#include "main.h"
/**
 * print_last_digit - last digit of int n
 *
 * @n : int being checked
 * Return: last digit of int n
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		n = n * -1;
	}
	if (n == 0)
	{
		_putchar('0' + n);
		return (n);
	}
	r = n % 10;
	_putchar('0' + r);

	return (r);
}
