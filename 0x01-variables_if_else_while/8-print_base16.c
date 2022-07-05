#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int ch;
	char albt[] = "0123456789abcdef";

	for (ch = 0 ; ch < 16 ; ch++)
	{
	putchar(albt[ch]);
	}
	putchar('\n');

	return (0);

}
