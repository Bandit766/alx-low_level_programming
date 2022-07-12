#include <stdio.h>
#include "main.h"

/**
* print_triangle - prints a triangle of size as param
*
* @size: input size of triangle as int
*
*/

void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - i; j > 1; j--)
		{
			_putchar(' ');
		}
		for (k = i + 1; k > 0; k--)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}

}
