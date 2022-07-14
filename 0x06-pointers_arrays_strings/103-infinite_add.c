#include <stdio.h>

/**
 *infinite_add - adds the input numbers to target string
 *@n1: first number to sum
 *@n2: second number to sum
 *@r: target buffer to write the sum
 *@size_r: size of target buffer
 *Return: 0 if error, otherwise buffer storing answer
 */
char *infinite_add(char *n1, char *n2, char *r1, int size_r)
{
	int i, j = 0, carry = 0, sum, n1len = 0, n2len = 0, totlen, adding = 1;
	int x, y;
	char r[500] = "0";

	for (i = 0; n1[i] != '\0'; i++)
		n1len++;
	for (i = 0; n2[i] != '\0'; i++)
		n2len++;

	if (n1len > n2len)
		totlen = n1len;
	else
		totlen = n2len;

	n1len--;
	n2len--;

	if (totlen > size_r)
	{
		return (0);

	}

	for (i = 0; i < totlen && i < size_r; i++)
	{
		sum = 0;
		if ((i == n1len + 1 || i == n2len + 1) && i != 0)
		{
			adding = 0;

		}

		if (adding)
		{
			x = n1[n1len - i] - 48;
			y = n2[n2len - i] - 48;
			sum = x + y;
			sum += carry;
			carry = 0;
			if (sum >= 10)
			{
				carry = 1;
				sum = sum % 10;
			}

			if (n1[n1len - i - 1] == '\0' || n2[n2len - i - 1] == '\0')
				adding = 0;
		}
		else if (n1len > n2len)
		{
			if (n1[n1len - i - 2] + carry > 9 && i >= size_r - 1)
			{
				return (0);
			}

			sum = n1[n1len - i] - 48;
			sum += carry;

			carry = 0;
			if (sum >= 10)
			{
				carry = 1;
				sum = sum % 10;
			}
		}
		else if (n2len > n1len)
		{
			if (n2[n2len - i - 2] + carry > 9 && i >= size_r - 1)
			{
				return (0);
			}

			sum = n2[n2len - i] - 48;
			sum += carry;
			carry = 0;
			if (sum >= 10)
			{
				carry = 1;
				sum = sum % 10;
			}
		}
		else
		{
			sum += carry;
			carry = 0;
			if (sum >= 10)
			{
				carry = 1;
				sum = sum % 10;
				if (i >= size_r - 1)
					return (0);
			}
		}

		if (sum == 0 && carry == 0)
		{
			return (0);
		}

		r[i] = '0' + (sum % 10);
		if (sum >= 10)

			if (i == totlen && carry == 1)
				return (0);
	}

	if (carry > 0)

	{
		if (i >= size_r - 1)
		{
			return (0);
		}

		r[i] = '0' + 1;
		totlen++;
		i++;
	}

	if (i >= totlen && i < size_r)
	{
		r1[i] = '\0';
	}

	for (; i > 0; i--)
	{
		r1[j] = r[i - 1];
		j++;
	}

	return (r1);
}
