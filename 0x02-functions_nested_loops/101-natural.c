#include <stdio.h>

/**
* main - will print the sums of the numbers divisible by 3 or 5 below 1024
*
* Return : 0 on success
*/

int main (void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	
	printf("%d\n",sum);
	return (0);
}
