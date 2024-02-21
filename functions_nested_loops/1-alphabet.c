#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by a newline
 *
 * Return: Always 0 (success)
 */


void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar ('\n');

}
