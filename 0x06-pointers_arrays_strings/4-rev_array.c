#include "main.h"
/**
* reverse_array - reverses the input array
* @a: input array
* @n: length of input array
*/

void reverse_array(int *a, int n)
{
	int arr[500];
	int i, j = 0;

	for (i = 0; i < n; i++)
	{
		arr[i] = a[i];
	}

	for (i = n - 1; i >= 0 && n != 0; i--)
	{
		a[j] = arr[i];
		j++;
	}
}
