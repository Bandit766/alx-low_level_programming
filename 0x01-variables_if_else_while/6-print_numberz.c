#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	int ch;
	char conv;

	for (ch = 0 ; ch < 10 ; ch++)
	{
	conv = ch + '0';
	putchar(conv);
	}
	putchar('\n');

	return (0);

}
