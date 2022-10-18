#include "main.h"

/***
*This function  returns nothing
*
*@printalphabet(void) prints alphabets in lower case
**/
void print_alphabet(void)
{	char a;
	for(a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
