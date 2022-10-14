#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 on success
 *
 */
int main(void)
{
	char i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
