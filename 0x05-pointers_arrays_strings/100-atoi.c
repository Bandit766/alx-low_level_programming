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
	int pos = 0, neg = 0, i = 0, sum = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '+')
		{
			pos++;
			i++;
			continue;
		}
		if (s[i] == '-')
		{
			neg++;
			i++;
			continue;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{

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

		i++;
	}

	if (neg - pos > 0)
		sum = sum * -1;
	
	return (sum);
}
