#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes ther */

/*betty style doc for functon main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rabd() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d id positive\m", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
