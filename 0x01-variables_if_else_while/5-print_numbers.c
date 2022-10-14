#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 on success
 *
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
