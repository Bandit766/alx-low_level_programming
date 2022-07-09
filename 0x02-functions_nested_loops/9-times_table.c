#include "main.h"

/**
* times_table - prints the 9 times table
*
*
*/

void times_table(void)
{
int i;
int j;
int calc;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
calc = i * j;
if (calc < 10)
{
_putchar('0' + calc);
}
else
{
_putchar('0' + (calc / 10));
_putchar('0' + (calc % 10));
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
