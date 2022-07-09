#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print from input n to 98
*
* @n : starting point
*/

void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i < 99; i++)
{
if (i < 98)
printf("%d, ", i);
else
printf("%d\n", i);
}
}
else if (n == 98)
{
printf("98\n");
}
else
{
for (i = n; i > 97; i--)
{
if (i > 97)
printf("%d, ", i);
else
printf("%d\n", i);
}
}
}
