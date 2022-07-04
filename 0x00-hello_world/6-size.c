#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sizechar = sizeof("char");
	int sizeint = sizeof("int");
	int sizelongint = sizeof("long");
	int sizellint = sizeof("long long");
	int sizefloat = sizeof("float");

	printf("Size of a char: %d\n", sizechar);
	printf("Size of an int: %d\n", sizeint);
	printf("Size of a long int: %d\n", sizelongint);
	printf("Size of a long long int: %d\n", sizellint);
	printf("Size of a float: %d\n", sizefloat);
	return (0);
}
