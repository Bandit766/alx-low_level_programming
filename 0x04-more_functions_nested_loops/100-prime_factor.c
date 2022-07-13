#include <stdio.h>
/**
* main - finds the largest prime number
* Return: 0 on success
*/
int main(void)
{
	long rootl, n = 612852475143, n1 = n / 3, i, ret = 3;
	float root = n / 2, temp = 0;
	int test;

	while (root != temp)
	{
		temp = root;
		root = (n / temp + temp) / 2;
	}
	rootl = (long)root;

	for (i = 5; i < rootl; i += 2)
	{
		if (n1 % i == 0)
		{
			n1 = n1 / i;
			ret = i;
		}
	}
	test = (int)ret;
	printf("%d\n", test);
	return (0);
}
