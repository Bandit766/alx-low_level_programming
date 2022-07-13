#include <stdio.h>
#include <math.h>
/**
* main - finds the largest prime number
* Return: 0 on success
*/
int main(void)
{
	long n = 612852475143, n1 = n / 3, i, ret = 3;
	long root = (long)sqrtl((long double)n);

	for (i = 5; i < root; i += 2)
	{
		if (n1 % i == 0)
		{
			n1 = n1 / i;
			ret = i;
		}
	}
	printf("%ld\n", (int)ret);
	return (0);
}
