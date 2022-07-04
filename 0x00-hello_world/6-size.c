#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sizechar = sizeof(char);
	int sizeint = sizeof(int);
	int sizelongint = sizeof(long);
	int sizellint = sizeof(long long);
	int sizefloat = sizeof(float);

	printf("Size of a char: %d byte(s)\n", sizechar);
	printf("Size of an int: %d byte(s)\n", sizeint);
	printf("Size of a long int: %d byte(s)\n", sizelongint);
	printf("Size of a long long int: %d byte(s)\n", sizellint);
	printf("Size of a float: %d byte(s)\n", sizefloat);
	return (0);
}
