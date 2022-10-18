#include "main.h"
/**
* _islower - main function
*
*@c: param to holder to check if it's lower
*
*Return: returns 1 if character is lowercase, 0 if false
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
