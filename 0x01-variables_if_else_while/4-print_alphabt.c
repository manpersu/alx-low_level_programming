#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 on success
 *
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if ((i == 'q') || (i == 'e'))
			;
		else
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
