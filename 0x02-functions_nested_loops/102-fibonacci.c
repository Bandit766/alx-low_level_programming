#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 * Return: 0 on success
*/

int main(void)
{
	int i,temp;
	int fib = 1;
	int fib1 = 1;

	printf("1, ");
	for (i = 0; i <= 50; i++)
	{
		temp = fib + fib1;
		fib = fib1;
		fib1 = temp;
		
		if (i < 50)
		{
			printf("%d, ", fib1);
		}
		else
		{
			printf("%d\n", fib1);
		}
	}
	return (0);
}
