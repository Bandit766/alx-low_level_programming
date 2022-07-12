#include "main.h"
#include <stdio.h>
/**
 * _atoi - returns the sum of the numbers in the input string
 *
 * @s: input string
 *
 * Return: the sum of the numbers in the string, 0 if no numbers
 */

int _atoi(char *s)
{
	int isneg = 0, prevneg = 0, i = 0, innum = 0;

	unsigned int sum = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '+')
		{
			isneg--;
			prevneg = 1;
		}
		if (s[i] == '-')
			isneg++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			innum = 1;

			if (sum == 0)
			{
				sum += (s[i] - '0');
			}
			else
			{
				sum = sum * 10;
				sum += (s[i] - '0');
			}
		}
		else if (innum > 0)
		{
			break;
		}

		i++;
	}
	printf("sum value %u\n", sum);
	if (isneg >= 0 && prevneg == 1)
		return (-sum);
	else
		return ((int)sum);
}
