#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int ch;
	char albt[] = "zyxwvutsrqponmlkjihgfedcba";

	for (ch = 0 ; ch < 26 ; ch++)
	{
	putchar(albt[ch]);
	}
	putchar('\n');

	return (0);

}
