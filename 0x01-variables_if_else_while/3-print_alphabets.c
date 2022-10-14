#include <stdio.h>
/**
 * main - entry point
 *
 * Return: return 0 on success
 *
 */
int main(void)
{
	char i= 'a';
	char j= 'A';
	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while(j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
