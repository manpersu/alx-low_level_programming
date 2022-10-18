#include "main.h"
/**
*_islower - returns 1 if the character is a lowercase otherwise, a 0
*
*Returns - Always 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
