#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 *
 * Return: this functions retuns a 1 on success and -1 if it there's an error
 * 
 */
int _putchar(char ch)
{
	char output = write(1, &ch, 1);
	return output;
}
