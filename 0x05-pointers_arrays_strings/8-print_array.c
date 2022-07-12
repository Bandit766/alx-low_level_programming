#include "main.h"
#include <stdio.h>
/**
* print_array - prints the 'n' elements of the input array
*
* @a: input array
* @n: number of elements to print
*
*
*
*/

void print_array(int *a, int n)
{
	int i;

	if (n < 1)
	{	
		fprintf(stderr, "Invalid array or array length\n");
	}
	else
	{

		for (i = 0; i < n; i++)
		{

			if (i < n - 1)
			printf("%d, ", a[i]);
			else
			printf("%d\n", a[i]);
		}
	}
}
