#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 on success
 *
 */
int main(void)
{
	int i = 10;

	while (i < 20)
	{
		putchar((i % 10) + '0');
		if (i != 19)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}

	putchar('\n');
	return (0);
}
