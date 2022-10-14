#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * Return: return 0 when executed successfully
 *
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldigit = n % 10; /*The mod 10 of n is the last digit**/

	if (ldigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
	} else if (lastn == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ldigit);
	} else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	}
	return (0);
}
