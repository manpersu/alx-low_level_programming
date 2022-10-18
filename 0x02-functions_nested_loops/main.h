/****Prototype for _putchar() ***/
#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character saved in ch to std
 * Return: 1 or 0
 */
int _putchar(char ch);

/*************
 *void print_alphabet(void); prints all aphabets
 *in lowercase
 *
 * *The function returns nothing
 **/
void print_alphabet(void);

/*******
 * void print_alphabet_x10(void) - prints alphabets in lowercase 10x
 *
 */
void print_alphabet_x10(void);

/**
 *int _islower(int c) checks if the character is in lowercase
 */
int _islower(int c);
/**
* This function checks if the character is an alphabet
*/
int _isalpha(int c);

/**
 *Returns 1 and prints + if n is greater than zero
 *Returns 0 and prints 0 if n is zero
 *Returns -1 and prints - if n is less than zero
 *
 */
int print_sign(int n);
#endif

