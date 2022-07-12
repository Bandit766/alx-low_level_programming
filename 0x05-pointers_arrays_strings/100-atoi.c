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


		/**
		 * printf("Currently working on the char: %c at pos %d.
		 * There are %d digits and the sum is %d\n", s[i], i, digits, sum);
		 */
		if (s[i] == '+')
			pos++;
		if (s[i] == '-')
			neg++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			if (sum == 0)
			{
				sum += (int)(s[i]);
			}
			else
			{
				sum = sum * 10;
				sum += (int)(s[i]);
			}
		}

		i++;
	}

	if (neg - pos > 0)
		sum = sum * -1;

	return (sum);
}
