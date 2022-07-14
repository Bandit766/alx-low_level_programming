#include <stdio.h>
#include "main.h"
int main(void)
{
	char *n = "1234561";
	//      char *m = "265983465962349569346";
	char *m = "9";
	/**    char *n = "12345";
	        char *m = "00000"; */
	char r[100];

	char *res;

	res = infinite_add(n, m, r, 100);
	if (res == 0)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n, m, res);
		//      printf("correct answer is : %d\n", x);
	}

	return (0);
}
