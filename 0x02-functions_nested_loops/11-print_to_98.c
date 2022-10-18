#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - main function
 * prints numbers from n to 98
 *
 * @m: The parameter that marks the initial count
 *
 * Return - returns 0 on success always
 */
void print_to_98(int m)
{
	int i;

	if (m > 98)
	{
		for (i = m; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (i = m; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
