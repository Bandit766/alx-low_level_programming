#include "main.h"
/**
 * print_sign - Print sign value of int n
 *
 * @n : int being checked
 * Return: If positive (1), if zero (0), if negative (-1)
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}

	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}

	_putchar('0');
	return (0);
}
