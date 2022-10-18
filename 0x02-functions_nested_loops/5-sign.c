#include "main.h"
/**
 * print_sign - main function
 *
 * @z: character to validate
 *
 * Return: 1 if positive, 0 if zero, -1 if negative
 *
 */

int print_sign(int z)
{
	if (z > 0)
	{
		_putchar('+');
		return (1);
	}
	if (z == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
