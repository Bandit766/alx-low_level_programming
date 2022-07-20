#include "main.h"

/**
* _sqrt_recursion - determine square root
* @n: number to calculate root of
* Return: square root of n
*/

int _sqrt_recursion(int n)
{
	int temp;

	if (n < 1)
		return -1;
	temp = n / ((n + n) / 2);
	if (n != temp)
		return ( _sqrt_recursion(temp));
	else
		return (temp);
}
