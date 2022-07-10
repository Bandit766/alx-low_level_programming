#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 on success
*/

int main(void)
{
	int i;
	int fib = 1;

	for (i = 0; i <= 50; i++)
	{
		fib += i;
		if (i < 50)
		{
			printf("%d, ", fib);
		}
		else
		{
			printf("%d\n", fib);
		}
	}
	return (0);
}
