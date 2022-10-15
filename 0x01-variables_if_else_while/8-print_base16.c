#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 on success
 *
 */
int main(void)
{
	int j = 0;
	char c = '0';

	while (j < 10)
	{
		putchar(c);
		c++;
		j++;
	}
	c = '1';
	j = 0;
	while (j < 6)
	{
		putchar('0' + c);
		c++;
		j++;
	}
	putchar('\n');
	return (0);
}
