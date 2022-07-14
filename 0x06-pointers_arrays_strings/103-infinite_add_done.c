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
//	printf("String 1 length %d String 2 length %d\n", n1len, n2len);
	if (n1len > n2len)
		totlen = n1len;
	else
		totlen = n2len;

	n1len--;
	n2len--;

	if (totlen > size_r)
	{
		return 0;
//		printf("Calc length %d > input max size %d\n", totlen, size_r);
	}
	for (i = 0; i < totlen && i < size_r; i++)
	{
		sum = 0;
		if ((i == n1len + 1 || i == n2len + 1) && i != 0)
		{
			adding = 0;
//			printf("No longer adding n1len = %d , n2len = %d and i = %d\n", n1len, n2len, i);
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

//			printf("Main If Statement: Adding %d and %d resulintg in %d with carry being %d at i = %d\n", x, y, sum, carry,i);

			if (n1[n1len - i - 1] == '\0' || n2[n2len - i - 1] == '\0')
				adding = 0;
		}
		else if (n1len > n2len)
		{
//			printf("Else if longer string 1, i = %d size = %d\n",i,size_r);
			if (n1[n1len - i - 2] + carry > 9 && i >= size_r - 1)
			{
//				printf("Attempting to carry a digit past buffer capacity after addition in next loop, i = %d, size = %d\n",i,size_r);
				return 0;
			}
			sum = n1[n1len - i] - 48;
			sum += carry;
//			printf("Else If from longer String 1 at[%d] sum value is now %d from source %c + carry value of %d\n", i, sum, n1[n1len - i], carry);
			carry = 0;
			if (sum >= 10)
			{
				carry = 1;
				sum = sum % 10;
			}
//			printf("Now after mod sum is %d and carry is %d\n", sum, carry);
		}
		else if (n2len > n1len)
		{
			if (n2[n2len - i - 2] + carry > 9 && i >= size_r - 1)
			{
//				printf("Error in Else If Longer 2nd String, attempting to carry out of range, i = %d, size = %d\n",i,size_r);
				return 0;
			}
			sum = n2[n2len - i] - 48;
			sum += carry;
			carry = 0;
			if (sum >= 10)
			{
				carry = 1;
				sum = sum % 10;
			}

//			printf("Else If from longer String 2 at[%d] sum value is now %d from source %c + carry if present\n", i, sum, n2[n2len - i]);
		}
		else
		{
//			printf("Final else (likely adding = 0)- sum = %d, carry = %d, i = %d\n", sum, carry, i);
			sum += carry;
			carry = 0;
			if (sum >= 10)
			{
				carry = 1;
				sum = sum % 10;
				if(i >= size_r - 1)
					return 0;
			}
		}
		if (sum == 0 && carry == 0)
		{
//			printf("Error before writing - Both sum and carry are 0 at i = %d with totlen = %d and last written value being %c\n", i, totlen, r[i-10]);
			return 0;
		}
//		printf("Final Writing %c replacing %c, carry is %d\n", ('0' + (sum % 10)), r[i], carry);
		r[i] = '0' + (sum % 10);
		if (sum >= 10)
//			printf("something missed at final value of sum after write");

		if (i == totlen && carry == 1)
			return 0;
	}
	if (carry > 0)
	{
			if(i >= size_r - 1)
			{	
//				printf("carried digit but buffer not large enough length is %d and buffer is %d\n", totlen + 1, size_r);
				return 0;
			}
//		printf("extra carried digit, now writing to i = %d and incrementing i and totlen (%d)\n", i,totlen);
		r[i] = '0' + 1;
		totlen++;
		i++;
	}
	if (i >= totlen && i < size_r)
	{
		if (r[i-1]!='1');
			r1[i] = '\0';
	}
	for (; i > 0; i--)
	{
//		printf("Swapping - Writing %c to replace %c in return string\n", r[i - 1], r1[j]);
		r1[j] = r[i - 1];
		j++;
	}

//	printf("Lengths are %d and %d\n", n1len, n2len);
	return (r1);
}
