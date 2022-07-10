#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 on success
*/

int main(void)
{
	int i;
	unsigned long temp;
	unsigned long fib = 1;
	unsigned long fib1 = 1;

	printf("1, ");
	for (i = 0; i < 49; i++)
	{
		temp = fib + fib1;
		fib = fib1;
		fib1 = temp;

		if (i < 50)
		{
			printf("%lu, ", fib1);
		}
		else
		{
			printf("%lu\n", fib1);
		}
	}
	return (0);
}
