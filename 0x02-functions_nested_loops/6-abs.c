#include "main.h"
/**
 * _abs - Get absoluve value of int n
 *
 * @n : int being checked
 * Return: absolute value if int
 */

int _abs(int n)
{

	if (n < 0)
	{
		n = n * -1;
		return (n);
	}

	return (n);
}
