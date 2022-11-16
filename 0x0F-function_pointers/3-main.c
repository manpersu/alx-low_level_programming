#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: arguments
 * @argv: array of args
 * Return: return something
 */
int main(int parama, char *paramb[])
{
	if (argc == 4)
	{
		int a;
		int b;
		int (*func)(int, int);

		a = atoi(paramb[1]);
		b = atoi(paramb[3]);
		func = get_op_func(paramb[2]);
		if ((*paramb[2] == '%' || *paramb[2] == '/') && b == 0)
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(a, b));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
