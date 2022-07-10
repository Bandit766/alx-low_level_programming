#include <stdio.h>

/**
* main - first 50 fibonacci
*
* Return: 0 on success
*/

int main(void)
{
int temp;
int fib1 = 1;
int fib2 = 1;
int check = 1;
int sum = 0;

while (check < 4000000 && check > 0)
{
	if (fib2 % 2 == 0)
	{
		sum += fib2;
	}
	temp = fib1 + fib2;
	fib1 = fib2;
	fib2 = temp;
	check = fib1 + fib2;
}
printf("%d\n", sum);
return (0);
}
