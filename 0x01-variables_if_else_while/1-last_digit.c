#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	int ld;
	ld = n%10;

	if(ld<6 && ld!=0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	else if(ld>6)
	printf("Last digit of %d is %d and is greater than 6 and not 0\n", n, ld);
	else
	printf("Last digit of %d is %d and is 0\n", n, ld);

	return (0);
}